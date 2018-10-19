#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void) {}
		MutantStack(MutantStack const &src) { *this = src; }
		MutantStack	&operator=(MutantStack const &rhs) {
			_mstack = rhs._mstack;
			return *this;
		}
		~MutantStack<T>(void) {}
		
		void	push(T val) { _mstack.push_front(val); }
		void	pop(void) { _mstack.pop_front(); }
		T		top(void) { return _mstack.front(); }
		T		size(void) { return _mstack.size(); }

		typedef typename std::list<T>::iterator iterator;
		iterator	begin() { return _mstack.begin(); }
		iterator	end() { return _mstack.end(); }

	private:
		std::list<T>	_mstack;
};

#endif
