#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str)
{
	char charValue;
	int intValue;
 	float floatValue;
	double doubleValue;
	int err = 0;

	std::istringstream ss(str);
	err = !(ss >> doubleValue);
 	if (err && str.length() == 1) {
		intValue = static_cast<int>(str[0]);
		floatValue = static_cast<float>(str[0]);
		doubleValue = static_cast<double>(str[0]);
	} else {
		intValue = static_cast<int>(doubleValue);
		floatValue = static_cast<float>(doubleValue);
	}

	if (intValue < 0 || intValue > 127 || (!intValue && str.length() != 1))
	{
		std::cout << "char: impossible" << std::endl;
	} else if (intValue < 32 || intValue > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		charValue = static_cast<char>(intValue);
		std::cout << "char: " << charValue << std::endl;
	}

	if (err && str.length() != 1) {
		std::cout << "int: impossible" << std::endl;
		if (str == "nan" || str == "nanf") {
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		} else if (str == "+inf" || str == "+inff") {
			std::cout << "float: inff" << std::endl;
			std::cout << "double: inf" << std::endl;
		} else if (str == "-inf" || str == "-inff") {
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		} else if (str == "inf" || str == "inff") {
			std::cout << "float: inff" << std::endl;
			std::cout << "double: inf" << std::endl;
		} else {
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
	else {
		if (doubleValue > std::numeric_limits<int>::max() || doubleValue < std::numeric_limits<int>::min())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << intValue << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(std::numeric_limits<float>::digits10) << floatValue;
		std::cout << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(std::numeric_limits<double>::digits10) << doubleValue;
		std::cout << std::endl;
	}

}

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
	(void)src;
	return (*this);
}