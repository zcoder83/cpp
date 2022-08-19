#include "Level7.h"

namespace codewars {


	// Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. 
	// If the two numbers are equal return a or b.
	int get_sum(int a, int b)
	{
		int big, small, sum = 0;
		
		// check big number and assign greater number to big variabble
		if (a > b) {
			big = a;
			small = b;
		}
		else if (a < b) {
			small = a;
			big = b;
		}
		// when a equals b, return a and terminate program
		else {
			return a;
		}
		
		// calculate sum between two numbers.
		for (int i = big; i >= small; --i) {
			sum += i;
		}

		return sum;

		//another solution

	}

}

