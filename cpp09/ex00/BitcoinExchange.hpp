#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <exception>

class BitcoinExchange {
	private:
		std::map<std::string, double> exchangeRate;
		std::map<std::string, double> input;
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange(std::string inputFile);
		~BitcoinExchange();
		BitcoinExchange &operator=(BitcoinExchange const &other);
		void getValues();
		void convert(int amount, std::string from, std::string to);
};

class file_not_found : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Error: could not open file.";
		}
};

class wrong_format : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Error: invalid format.";
		}
};

#endif