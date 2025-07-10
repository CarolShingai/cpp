#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[38;5;93m"
# define CYAN "\033[36m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"


template <typename T>
class Array{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &other);
		Array &operator=(const Array &other);
		T &operator[](unsigned int index);

		unsigned int size() const;
};


#endif
