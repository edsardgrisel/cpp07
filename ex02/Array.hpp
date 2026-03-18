#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>
class Array
{
	public:
		Array();
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

	private:
		T array[];
		unsigned int size;

};

#endif // ARRAY_HPP