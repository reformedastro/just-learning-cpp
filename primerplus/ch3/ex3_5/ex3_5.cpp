/*
 * ex3_5.cpp
 *
 *  Exercise 5: Write a program that requests the user to enter the
 *  current world population and the current population of the U.S.
 *  (or for some other nation of your choice). Store the information
 *  in variables of type long long. Have the program display the
 *  percent that U.S. (or other nation's) population is of the world's
 *  population. The output should look something like this:
 *
 *  Enter the world's population: 6898758899
 *  Enter the population of the US: 310783781
 *  The population of the US is 4.50492% of the world population.
 *
 *  You can use the Internet to get more recent figures.
 *
 *  Created on: Mar 27, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

int main()
{
	long long  wpop,upop;

	std::cout << "Enter the world's population: ";
	std::cin >> wpop;
	std::cout << "Enter the population of the US: ";
	std::cin >> upop;

	float prop = float(upop)/float(wpop) * 100.;

	std::cout << "The population of the US is " << prop
			<< "% of the world population." << std::endl;

	return 0;
}




