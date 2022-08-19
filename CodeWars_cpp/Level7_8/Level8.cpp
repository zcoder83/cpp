#include "Level8.h"

namespace codewars {

	//	We need a function that can transform a number (integer) into a string.
	//	123  -- > "123"
	//	999  -- > "999"
	//	-100 -- > "-100"
	std::string number_to_string(int num) {
		return std::to_string(num);
	}


	// Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.
	std::string bool_to_word(bool value)
	{
		return value ? "Yes" : "No";
	}

	// Your classmates asked you to copy some paperwork for them. You know that there are 'n' classmates and the paperwork has 'm' pages.

	// Your task is to calculate how many blank pages do you need.If n < 0 or m < 0 return 0
	int paperwork(int n, int m) {
		return n > 0 && m > 0 ? n * m : 0;
	}

	


}
