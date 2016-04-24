/*
 * ex5_4.cpp
 *
 * Exercise 4:
 *
 *  Created on: Apr 6, 2016
 *      Author: lamadd0x
 */

#include <iostream>

int main()
{
	float c2;
	float c1 = c2 = 100;
	float r1 = 0.1;
	float r2 = 0.05;

	int yr;
	float c0 = 100;
	c1 += r1 * c0;
	c2 += r2 * c2;

	for (yr = 2; c1 > c2; yr++)
	{
		c1 += c0 * r1;
		c2 += c2 * r2;
	}

	std::cout << "After " << yr << " years, Daphne has $" << c1
			  << ", and Cleo has $" << c2 << ".\n";

	return 0;

}

