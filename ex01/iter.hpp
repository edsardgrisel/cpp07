#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>


template <typename T1, typename T2>
void iter(T1* array, const std::size_t size, T2 func)
{
	for (std::size_t i = 0; i < size; i++)
	{
		func((*array)[i]);
	}
}

#endif // ITER_HPP