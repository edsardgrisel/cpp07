#include <stdexcept>

template <typename T>
Array<T>::Array() : n(0)
{
	this->array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : n(n)
{
	this->array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other) : n(other.n)
{
	this->array = new T[other.n];
	for (unsigned int i = 0; i < other.n; i++)
	{
		this->array[i] = other.array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return *this;

	delete this->array;
	this->array = new T[other.n];
	for (unsigned int i = 0; i < other.n; i++)
	{
		this->array[i] = other.array[i];
	}

	this->n = other.n;

	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->n)
		throw std::out_of_range("Array index out of range exception thrown");
	return this->array[index];
}

template <typename T>
int Array<T>::size() const
{
	return this->n;
}