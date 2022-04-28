#ifndef	ARRAY_HPP
# define	ARRAY_HPP

# include <iostream>

template<class T>
class Array{

public:
	Array() {
		_size = 0;
		_element = NULL;
	}
	Array( unsigned int n ) {
		_size = (int)n;
		_element = new T[_size];
	}
	Array( Array const &copy ) {
		_size = copy.size();
		_element = new T[_size];
	}

	~Array() {
		if (_element)
			delete [] _element;
	}

	Array	&operator=( Array const &array ){
		if (this == &array)
			return *this;
		if (this->_size != 0)
			delete[] this->_element;
		this->_size = array._size;
		if (this->_size > 0)
		{
			this->_element = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = array._element[i];
		}
		else
			this->_element = nullptr;
		return *this;
	}
	T		&operator[]( int index) const {
		if (index >= this->_size)
			throw IndexIsOutOfRange();
		return this->_element[index];
	}

	int		getSize( void ) const {
		return (_size);
	}

	class IndexIsOutOfRange: public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Index is out of range";
		}
	};

private:
	T	*_element;
	int	_size;
};

#endif
