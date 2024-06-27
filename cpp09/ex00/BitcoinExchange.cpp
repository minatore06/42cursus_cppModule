#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) {
	*this = other;
}

BitcoinExchange::BitcoinExchange(std::string inputFile) {
	std::ifstream file(inputFile.c_str());
	if (!file.is_open()) {
		throw file_not_found();
	}
	std::string line;
	std::getline(file, line);
	if (line.compare("date | value") != 0) {
		throw wrong_format();
	}
	while (file.good()) {
		std::getline(file, line);
		input[line.substr(0, line.find(' '))] = static_cast<double>(line.substr(line.rfind(' ') + 1));
	}
	file.close();

	file.open("data.csv");
	if (!file.is_open()) {
		throw file_not_found();
	}
	line = "";
	while (file.good()) {
		std::getline(file, line);
		exchangeRate[line.substr(0, line.find(','))] = std::stod(line.substr(line.find(',') + 1));
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange() {
	delete &exchangeRate;
	delete &input;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other) {
	exchangeRate = other.exchangeRate;
	input = other.input;
	return *this;
}

void BitcoinExchange::getValues() {
	double rate;
	std::map<std::string, double>::iterator it;
	std::map<std::string, double>::iterator it2;
	for (it = input.begin(); it != input.end(); it++) {
		if (it->second < 0) {
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (it->second > 1000) {
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		if (!strptime(it->first.c_str(), "%Y-%m-%d", NULL) == false) {
			std::cout << "Error: invalid date." << std::endl;
			continue;
		}
		if (exchangeRate[it->first])
			rate = it->second * exchangeRate[it->first];
		else {
			it2 = exchangeRate.begin();
			while (it->first.compare(it2->first) > 0)
				it2++;
			it2--;
			rate = it->second * it2->second;
		}
		std::cout << it->first << " => " << it->second << " = " << it->second * exchangeRate[it->first] << std::endl;
	}
}