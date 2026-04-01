/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:40:54 by chnaranj          #+#    #+#             */
/*   Updated: 2026/04/01 16:41:00 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack() : std::stack<T>()
	{
	}

	MutantStack(const MutantStack & other) : std::stack<T>(other)
	{
	}

	MutantStack & operator=(const MutantStack & other)
	{
		if (this != &other)
		{
			std::stack<T>::operator=(other);
		}
		return *this;
	}

	virtual ~MutantStack()
	{
	}

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}
};

#endif
