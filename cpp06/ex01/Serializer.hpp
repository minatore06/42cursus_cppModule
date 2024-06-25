#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <string>

typedef struct Data {
	std::string ses;
	int x;
} Data;

class Serializer {
public:
	Serializer();
	virtual ~Serializer();
	Serializer(const Serializer &obj);
	Serializer &operator=(const Serializer &obj);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif