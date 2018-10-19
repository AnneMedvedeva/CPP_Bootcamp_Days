#include "span.hpp"

/*
int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}*/

int main()
{
	try
	{
		std::cout << "test 1: size [5] {5, 3, 17, 9, 11}" << std::endl;
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (Span::LFE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::NSE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected Error occurred" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "test 2: size [5] {3, 7, 21, 16, 12}" << std::endl;
		Span sp = Span(5);

		sp.addNumber(3);
		sp.addNumber(7);
		sp.addNumber(21);
		sp.addNumber(16);
		sp.addNumber(12);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (Span::LFE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::NSE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected Error occurred" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "test 3: size [1] {3}" << std::endl;
		Span sp = Span(1);

		sp.addNumber(3);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (Span::LFE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::NSE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected Error occurred" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "test 4: size [0] {}" << std::endl;
		Span sp = Span(0);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (Span::LFE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Span::NSE &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected Error occurred" << std::endl;
		std::cout << e.what() << std::endl;
	}
}
