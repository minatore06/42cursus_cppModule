#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : length(0), array(new T[0])
{
}

template <typename T>
Array<T>::Array(unsigned int n) : length(n), array(new T[n])
{
}

template <typename T>
Array<T>::Array(Array const &other) : length(other.length), array(new T[other.length])
{
	for (unsigned int i = 0; i < length; i++)
		array[i] = other.array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		delete[] array;
		length = other.length;
		array = new T[length];
		for (unsigned int i = 0; i < length; i++)
			array[i] = other.array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= length)
		throw std::out_of_range("Index out of range");
	return array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return length;
}

#endif