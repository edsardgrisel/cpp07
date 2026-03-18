
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& left, T& right){
	T temp = left;
	left = right;
	right = temp;
}

template <typename T>
T min(const T& left, const T& right){
	return (left < right) ? left : right;
}

template <typename T>
T max(const T& left, const T& right){
	return (left > right) ? left : right;
}

#endif // WHATEVER_HPP
