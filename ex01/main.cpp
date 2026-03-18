#include "iter.hpp"
#include <string>
#include <iostream>

void strToUpper(std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
}

void charToUpper(char& c)
{
	c = toupper(c);
}

void floatIncrement(float& f)
{
	f += 0.1f;
}

void intDoNothing(const int& integer)
{
	(void)integer;
}

int main()
{
	{
		std::string array[] = {"abc", "xYz123", "hello-world"};
		std::size_t size = 3;
		for (size_t i = 0; i < size; i++) 
			std::cout << array[i] << std::endl;
		iter(&array, size, strToUpper);
		for (size_t i = 0; i < size; i++) 
			std::cout << array[i] << std::endl;
	}
	{
		std::cout << std::endl;
		char array[] = {'a', 'b', 'C'};
		float size = 3;
		for (size_t i = 0; i < size; i++) 
			std::cout << array[i] << std::endl;
		iter(&array, size, charToUpper);
		for (size_t i = 0; i < size; i++) 	
			std::cout << array[i] << std::endl;
	}
	{
		std::cout << std::endl;
		float array[] = {1.0f, 1.5f, 10.0f, -25.0f};
		float size = 4;
		for (size_t i = 0; i < size; i++) 
			std::cout << array[i] << std::endl;
		iter(&array, size, floatIncrement);
		for (size_t i = 0; i < size; i++) 
			std::cout << array[i] << std::endl;
	}
	{
		std::cout << std::endl;
		int array[] = {1, 5};
		float size = 2;
		for (size_t i = 0; i < size; i++) 
			std::cout << array[i] << std::endl;
		iter(&array, size, intDoNothing);
		for (size_t i = 0; i < size; i++) 
			std::cout << array[i] << std::endl;
	}
}