#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>

#include <limits>
#include <iomanip>

class ScalarConverter
{
private:
	ScalarConverter();
	virtual ~ScalarConverter();
public:
	ScalarConverter(const ScalarConverter &obj);
	ScalarConverter &operator=(const ScalarConverter &obj);
	
	static void convert(std::string str);
};

#endif