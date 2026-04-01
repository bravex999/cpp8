/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:40:33 by chnaranj          #+#    #+#             */
/*   Updated: 2026/04/01 16:40:34 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <exception>
# include <iterator>

class Span
{
private:
	unsigned int _n;
	std::vector<int> _vec;

public:
	Span();
	Span(unsigned int n);
	Span(const Span & other);
	Span & operator=(const Span & other);
	~Span();

	void addNumber(int number);
	
	template <typename Iterator>
	void addRange(Iterator begin, Iterator end)
	{
		if (_vec.size() + std::distance(begin, end) > _n)
		{
			throw std::exception();
		}
		_vec.insert(_vec.end(), begin, end);
	}

	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif
