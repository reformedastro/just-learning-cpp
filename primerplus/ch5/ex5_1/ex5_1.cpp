/*
 * ex5_1.cpp
 *
 * Exercise 1: Write a program that requests the user to enter two
 * integers.  This program should then calculate and report the sum
 * of all the integers between and including the two integers. At this
 * point, assume that the smaller integer is entered first.  For
 * example, if the user enters 2 and 9, the program should report that
 * the sum of all the integers from 2 to 9 is 44.
 *
 *  Created on: Apr 6, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

int main()
{
	unsigned int start, end;

	std::cout <<"Enter two integer values: ";
	std::cin >> start >> end;

	unsigned int sum = 0;

	for (int i=start; i <= end; i++)
	{
		sum += i;
	}

	std::cout << "The sum of all integers from " << start << " through "
			  << end << " is " << sum << ".\n";

	return 0;

}



