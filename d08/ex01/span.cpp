#include "span.hpp"

// Span

Span::Span(void) {}

Span::Span(unsigned int n) {
	if (n == 0)
		throw Span::LFE();
	_size = n;
	_arr = new int[_size];
	_elem = 0;
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = 0;
}

Span::Span(Span const &src) { *this = src; }

Span	&Span::operator=(Span const &rhs) {
	_size = rhs._size;
	_elem = rhs._elem;
	_arr = new int[_size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = rhs._arr[i];
	return *this;
}

Span::~Span(void) {
	delete [] _arr;
}

void	Span::addNumber(int n) {
	if (_elem >= _size)
		throw Span::LFE();
	_arr[_elem++] = n;
}

int		Span::shortestSpan(void) {
	if (_elem < 2)
		throw Span::NSE();
	int shortest = abs(_arr[0] - _arr[1]);
	for (unsigned int i = 0; i < _elem; i++) {
		for (unsigned int j = 0; j < _elem; j++) {
			int span = abs(_arr[i] - _arr[j]);
			if (j != i && shortest > span)
				shortest = span;
		}
	}
	return shortest;
}

int		Span::longestSpan(void) {
	if (_elem < 2)
		throw Span::NSE();
	int longest = abs(_arr[0] - _arr[1]);
	for (unsigned int i = 0; i < _elem; i++) {
		for (unsigned int j = 0; j < _elem; j++) {
			int span = abs(_arr[i] - _arr[j]);
			if (j != i && longest < span)
				longest = span;
		}
	}
	return longest;
}

// LFE

Span::LFE::LFE(void) {}

Span::LFE::LFE(Span::LFE const &src) { *this = src; }

Span::LFE	&Span::LFE::operator=(Span::LFE const &rhs) { (void)rhs; return *this; }

Span::LFE::~LFE(void) throw() {}

const char	*Span::LFE::what(void) const throw() {
	return "Error: List is full";
}

// NSE

Span::NSE::NSE(void) {}

Span::NSE::NSE(Span::NSE const &src) { *this = src; }

Span::NSE	&Span::NSE::operator=(Span::NSE const &rhs) { (void)rhs; return *this; }

Span::NSE::~NSE(void) throw() {}

const char	*Span::NSE::what(void) const throw() {
	return "Error: Could not find span";
}
