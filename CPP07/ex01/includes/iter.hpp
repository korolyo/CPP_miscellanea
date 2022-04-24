#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *arr, int len, void(*funcArr)(T const &)) {

	for (int i = 0; i < len; i++){
		funcArr(arr[i]);
	}
}

#endif
