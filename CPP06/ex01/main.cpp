#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

typedef struct Data
{
	std::string 	str1;
	std::string 	str2;
	int 			n;
}				Data;

uintptr_t   serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(ray));
}

int main( void )
{
    yo;
    return 0;
}
