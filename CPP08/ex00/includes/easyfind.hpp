#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
int	easyfind(T & container, int i) {
	typename T::iterator	it;
	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw "Integer isn't find";
	return *it;
}

#endif
