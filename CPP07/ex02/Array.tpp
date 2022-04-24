#include <iostream>
#include "Array.hpp"

template<class T>
Array<T>::Array() {
	_size = 0;
	_element = NULL;
}

template<class T>
Array<T>::Array( unsigned int n ) {
	_size = (int)n;
	_element = new T[_size];
}

template<class T>
Array<T>::Array( Array const &copy ) {
	_size = copy.size();
	_element = new T[_size];
}

template<class T>
Array	&Array<T>::operator=( Array const &array ) {

}

template<class T>
T		&Array<T>::operator[]( int i) const {

}

template<class T>
Array<T>::~Array() {
	if (_element)
		delete [] _element;
}

template<class T>
int		Array<T>::size( void ) const {
	return (_size);
}
