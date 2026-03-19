#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T& operator[](unsigned int index);
		int size() const;

	private:
		T* array;
		unsigned int n;

};

#include "Array.tpp"

#endif // ARRAY_HPP