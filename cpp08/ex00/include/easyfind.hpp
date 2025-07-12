#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <stdexcept>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[38;5;93m"
# define CYAN "\033[36m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

template <typename T>
typename T::iterator easyfind(T &container, int nbr){
	typename T::iterator it = std::find(container.begin(), container.end(), nbr);
	if (it == container.end())
		throw std::runtime_error("Value not found in the container.");
	return it;
}

#endif
