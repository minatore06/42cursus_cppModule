#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: missing argument" << std::endl;
		return 1;
	}
	try {
		BitcoinExchange exchange(av[1]);
		exchange.getValues();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}