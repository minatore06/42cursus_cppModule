#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) {
	*this = other;
}

BitcoinExchange::BitcoinExchange(std::string inputFile) : input(inputFile){
	std::string line;
	std::ifstream file("data.csv");
	if (!file.is_open()) {
		throw file_not_found();
	}
	while (file.good()) {
		std::getline(file, line);
		std::istringstream iss(line.substr(line.find(',') + 1));
		iss >> exchangeRate[line.substr(0, line.find(','))];
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other) {
	exchangeRate = other.exchangeRate;
	input = other.input;
	return *this;
}

void BitcoinExchange::getValues() {
	std::string line;
	std::ifstream file(input.c_str());
	if (!file.is_open()) {
		throw file_not_found();
	}

	std::getline(file, line);
	if (line.compare("date | value") != 0) {
		throw wrong_format();
	}

	std::string key;
	double value;
	while (std::getline(file, line)) {
		if (line.rfind(' ') == std::string::npos) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
	
		key = line.substr(0, line.find(' '));
		std::istringstream iss(line.substr(line.rfind(' ') + 1));
		iss >> value;

		if (value < 0) {
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 1000) {
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		struct tm timeDate;
		if (!strptime(key.c_str(), "%Y-%m-%d", &timeDate)) {
			std::cout << "Error: invalid date." << std::endl;
			continue;
		}
	
		double rate;
		std::map<std::string, double>::iterator it;
		if (exchangeRate[key])
			rate = value * exchangeRate[key];
		else {
			it = exchangeRate.begin();
			while (key.compare(it->first) > 0)
				it++;
			it--;
			rate = value * it->second;
		}
		std::cout << key << " => " << value << " = " << rate << std::endl;
	}
	file.close();
}