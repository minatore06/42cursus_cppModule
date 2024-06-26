#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int length;
	T* array;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &other); 
	~Array();
	Array &operator=(Array const &other);
	T &operator[](unsigned int i);
	unsigned int size() const;
};

#include "Array.tpp"
#endif