/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:39:48 by chnaranj          #+#    #+#             */
/*   Updated: 2026/04/01 16:39:49 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	std::vector<int> v(arr, arr + 5);
	std::list<int> l(arr, arr + 5);

	try
	{
		std::cout << "Buscando 3 en vector: " << *easyfind(v, 3) << std::endl;
		std::cout << "Buscando 5 en lista: " << *easyfind(l, 5) << std::endl;
		std::cout << "Buscando 10 en vector: " << *easyfind(v, 10) << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
