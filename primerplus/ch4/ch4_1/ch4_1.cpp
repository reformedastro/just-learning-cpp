/*
 * ch4_1.cpp
 *
 * Exercise 1: Write a C++ program that requests and displays information
 * as shown in the following example:
 *
 * What is your first name? Betty Sue
 * What is your last name? Yewe
 * What letter grade do you deserve? B
 * What is your age? 22
 * Name: Yewe, Betty Sue
 * Grade: C
 * Age: 22
 *
 * Note that the program should be able to accept first names that comprise
 * more than one word. Also note that the program adjusts the grade downward
 * -- that is, up one letter. Assume that the user requests an A, a B,
 * or a C so that you don't have to worry about the gap between a D and an F.
 *
 *  Created on: Apr 2, 2016
 *      Author: lamadd0x
 */

#import <iostream>

int main()
{
	const int size = 20;
	char first[size];
	char last[size];
	char grade;
	char age[3];

	std::cout << " What is our first name?";
    std::cin.getline(first, size);

	std::cout << "What is your last name?";
	std::cin.getline(last, size);

	std::cout << "What letter grade do you deserve?";
	(std::cin >>grade).get();

	std::cout << "What is your age?";
	std::cin.getline(age,3);

	std::cout << "Name: " << last << ", " << first << std::endl;
	std::cout << "Grade: " << char(int(grade) + 1) << std::endl;
	std::cout << "Age: " << age << std::endl;

	return 0;

}


