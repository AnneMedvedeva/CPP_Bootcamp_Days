#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>

# define RAND_ARR "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

struct			Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif