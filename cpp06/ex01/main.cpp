#include "Serializer.hpp"

#include <iostream>

int main() {
	Data data;
	data.ses = "Hello, World!";
	data.x = 42;

	std::cout << "Data data" << std::endl;
	std::cout << "ses: " << data.ses << std::endl;
	std::cout << "x: " << data.x << std::endl << std::endl;

	uintptr_t raw = Serializer::serialize(&data);

	std::cout << "Still data data, but after serialization" << std::endl;
	std::cout << "ses: " << data.ses << std::endl;
	std::cout << "x: " << data.x << std::endl << std::endl;

	Data* ptr = Serializer::deserialize(raw);

	std::cout << "Data2 data, new of deserialization" << std::endl;
	std::cout << "ses2: " << ptr->ses << std::endl;
	std::cout << "x2: " << ptr->x << std::endl << std::endl;

	std::cout << "Stuff" << std::endl;
	std::cout << "raw: " << raw << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "&data: " << &data << std::endl << std::endl;

	if (ptr == &data)
		std::cout << "EPIC! Funziona" << std::endl;
	else
		std::cout << "NOPE! Non funziona" << std::endl;
	return 0;
}