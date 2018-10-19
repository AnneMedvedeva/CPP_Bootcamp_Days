#include "easyfind.hpp"

int main()
{
	std::srand(std::time(NULL));

	std::vector<int>	v;
	std::list<int>		l;

	std::cout << "creating vector... [0 - 9]" << std::endl;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	std::cout << "creating list... [10 - 19]" << std::endl;
	for (int i = 10; i < 20; i++)
		l.push_back(i);

	std::cout << "vector test" << std::endl << std::endl;
	try
	{
		int find = 5;
		std::cout << "find: " << find << std::endl;
		int res = easyfind(v, find);
		std::cout << "res: " << res << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: could not find" << std::endl;
	}
	try
	{
		int find = -2;
		std::cout << "find: " << find << std::endl;
		int res = easyfind(v, find);
		std::cout << "res: " << res << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: could not find" << std::endl;
	}
	std::cout << std::endl << "list test" << std::endl << std::endl;
	try
	{
		int find = 12;
		std::cout << "find: " << find << std::endl;
		int res = easyfind(l, find);
		std::cout << "res: " << res << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: could not find" << std::endl;
	}
	try
	{
		int find = 25;
		std::cout << "find: " << find << std::endl;
		int res = easyfind(l, find);
		std::cout << "res: " << res << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: could not find" << std::endl;
	}
}
