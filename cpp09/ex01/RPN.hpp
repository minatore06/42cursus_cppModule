#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <exception>


int RPN_run(std::string input);

class bad_expression : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return "Error: invalid expression";
	}
};

#endif