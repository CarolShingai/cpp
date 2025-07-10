#include "../include/Array.hpp"
#include <cstddef>

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n){}

template <typename T>
Array<T>::Array(const Array &other) : _array(NULL), _size(other._size){
	if (_size > 0)
	{
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			this->_array[i] = other._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other){
	if (this != &other){
		delete[] this->_array;
		this->_size = other._size;
		this->_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			this->_array[i] = other._array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array(void){
	delete[] this->_array;
	this->_array = NULL;
	this->_size = 0;
}

// methods
template <typename T>
T &Array<T>::operator[](unsigned int index){
	if (index >= this->_size)
		throw std::out_of_range(RED"Index out of range");
	return this->_array[index];
}

template <typename T>
unsigned int Array<T>::size() const{
	return this->_size;
}
