#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

typedef struct Data
{
	char 			c;
	std::string 	str;
	int 			i;
}				Data;

void initStruct(Data *data) {
	data->c = 'B';
	data->i = 10;
	data->str = "String";
}

uintptr_t   serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main( void )
{

	Data		data;
	Data*		ptr;
	Data*		des_ptr;
	uintptr_t	raw;

	ptr = &data;
	initStruct(&data);

	std::cout << "Raw structure" << std::endl;
	std::cout << ptr->i << std::endl;
	std::cout << ptr->c << std::endl;
	std::cout << ptr->str << std::endl << std::endl;
	raw = serialize(ptr);
	des_ptr = deserialize(raw);
	std::cout << "After using serialize and deserialize" << std::endl;
	std::cout << des_ptr->i << std::endl;
	std::cout << des_ptr->c << std::endl;
	std::cout << des_ptr->str << std::endl << std::endl;
	std::cout << "Compare two pointers" << std::endl;
	std::cout << ptr << std::endl;
	std::cout << des_ptr << std::endl;

	return 0;
}
