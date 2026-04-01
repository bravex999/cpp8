/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:40:00 by chnaranj          #+#    #+#             */
/*   Updated: 2026/04/01 16:40:01 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;

		std::cout << "Prueba exhaustiva (20,000 números):" << std::endl;
		Span bigSpan(20000);
		std::vector<int> v;
		std::srand(std::time(0));
		for (int i = 0; i < 20000; i++)
		{
			v.push_back(std::rand());
		}
		bigSpan.addRange(v.begin(), v.end());
		std::cout << "Shortest: " << bigSpan.shortestSpan() << std::endl;
		std::cout << "Longest: " << bigSpan.longestSpan() << std::endl;

		std::cout << "Prueba de error (lleno):" << std::endl;
		bigSpan.addNumber(42);
	}
	catch (const std::exception & e)
	{
		std::cerr << "Excepción capturada correctamente" << std::endl;
	}
	return 0;
}
