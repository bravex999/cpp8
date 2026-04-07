/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:40:13 by chnaranj          #+#    #+#             */
/*   Updated: 2026/04/01 16:40:15 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span & other)
{
	*this = other;
}

Span & Span::operator=(const Span & other)
{
	if (this != &other)
	{
		_n = other._n;
		_vec = other._vec;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
	if (_vec.size() >= _n)
		throw std::exception();
	_vec.push_back(number);
}

unsigned int Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw std::exception();
	
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	
	unsigned int min_diff = static_cast<unsigned int>(static_cast<long long>(sorted[1]) - static_cast<long long>(sorted[0]));
	for (size_t i = 1; i < sorted.size() - 1; i++)
	{
		unsigned int diff = static_cast<unsigned int>(static_cast<long long>(sorted[i + 1]) - static_cast<long long>(sorted[i]));
		if (diff < min_diff)
			min_diff = diff;
	}
	return min_diff;
}

unsigned int Span::longestSpan()
{
	if (_vec.size() < 2)
		throw std::exception();
	
	int min_val = *std::min_element(_vec.begin(), _vec.end());
	int max_val = *std::max_element(_vec.begin(), _vec.end());
	
	return static_cast<unsigned int>(static_cast<long long>(max_val) - static_cast<long long>(min_val));
}
