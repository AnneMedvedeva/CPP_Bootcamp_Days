#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>

template<typename T>
int		easyfind(T container, int find)
{
	typename T::iterator	p;

	p = std::find(container.begin(), container.end(), find);
	if (p != container.end())
		return *p;
	else
		throw std::exception();
}

#endif
