#include "RPN.hpp"

int RPN_run(std::string input) {
	std::stack<int> stack;
	int x;
	for (std::string::iterator it = input.begin(); it != input.end(); it++) {
		if (*it == ' ')
			continue;
		x = *it - '0';
		if (x < 0 || x > 9){
			switch (*it) {
				case '+':
					x = stack.top();
					stack.pop();
					stack.top() += x;
					break;
				case '-':
					x = stack.top();
					stack.pop();
					stack.top() -= x;
					break;
				case '*':
					x = stack.top();
					stack.pop();
					stack.top() *= x;
					break;
				case '/':
					x = stack.top();
					stack.pop();
					stack.top() /= x;
					break;
				default:
					throw bad_expression();
					break;
			}
		} else
			stack.push(x);
	}
	x = stack.top();
	stack.pop();
	if (!stack.empty())
		throw bad_expression();
	return x;
}