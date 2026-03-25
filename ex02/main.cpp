#include "Array.hpp"
#include <iostream>

struct person {
	std::string name;
	unsigned int age;
};

int main()
{
	{
		// test empty
		Array<int> array;
		std::cout << "empty array size: " << array.size() << std::endl;
	}
	{
		// test full array
		std::cout << "-------------Test simple type" << std::endl;
		Array<int> longArray(3);
		std::cout << "long array size: " << longArray.size() << std::endl;
		for (int i = 0; i < 3; i++)
		{
			longArray[i] = i * 2;
		}
		std::cout << "long array contents [ ";
		for (int i = 0; i < 3; i++)
		{
			std::cout << longArray[i] << " ";
		}
		std::cout << "]\n\n" << std::endl;

		// test copy constructor 
		std::cout << "-------------Test copy contructor" << std::endl;
		Array<int> copy(longArray);
		longArray[0] = 100;
		std::cout << "copy contents [ ";
		for (int i = 0; i < 3; i++)
		{
			std::cout << copy[i] << " ";
		}
		std::cout << "]" << std::endl;


		try {
			longArray[4] = 42;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	{
		// test complex type
		std::cout << "-------------Test complex type" << std::endl;
		Array<person> personArray(2);
		std::cout << "person array size: " << personArray.size() << std::endl;
		personArray[0].age = 1;
		personArray[0].name = "abc";

		personArray[1].age = 2;
		personArray[1].name = "xyz";

		Array<person> assignmentOverloadTestLest(1);
		assignmentOverloadTestLest = personArray;


		std::cout << "personArray contents [ ";
		for (int i = 0; i < 2; i++)
		{
			std::cout << "Name: " << personArray[i].name << " Age: " << personArray[i].age << ", ";
		}
		std::cout << "]" << std::endl;

		try {
			personArray[-1].age = 5;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		// test empty array
		std::cout << "-------------test empty array" << std::endl;
		Array<person> personArray(0);
		std::cout << "person array size: " << personArray.size() << std::endl;
		try {
			personArray[0].age = 5;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
}