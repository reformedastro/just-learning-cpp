/*
 * ex7_4.cpp
 *
 *	Many state lotteries use a variation of the simple lottery portrayed
 *	by Listing 7.4. In these variations you choose several numbers from
 *	one set and call them the field numbers.  For example, you might
 *	select five numbers from the field of 1-47.  You also pick a single
 *	number (called a mega number of a powerball, etc.) from a second
 *	range, such as 1-27. To win the grand prize, you have to guess all
 *	picks correctly.  The chance of winning is the product of the
 *	probability of picking all the field numbers times the probability
 *	of picking the mega number. For instance, the probability of winning
 *	the example described here is the product of the probability of
 *	picking 5 out of 47 correctly times the probability of picking 1 out
 *	of 27 correctly. Modify Listing 7.4 to calulate the probability
 *	of winning this kind of lottery.
 *
 *  Created on: Apr 23, 2016
 *      Author: Larry Maddox
 */

#include <iostream>

long double probability( unsigned numbers, unsigned picks, unsigned mega );

int main()
{
	double total, choices, power;

	std::cout << "Enter the total number of choices on the game card,\n"
			     "the number of picks allowed, and the number of choices\n"
			     "for the powerball: ";

	while ((std::cin >> total >> choices >> power) && choices <= total)
	{
		std::cout << " You have one chance in ";
		std::cout << probability(total, choices, power);
		std::cout << " of winning.\n";
		std::cout << "Next two numbers (q to quit): ";
	}

	std::cout << "bye\n";

	return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned mega)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;

	/* Added this check so that function will get same result as
	 * the original in a standard lottery scenario (no megaball)*/
	if (mega == 0)
		return result;
	else
		result = result * mega;

	return result;
}

