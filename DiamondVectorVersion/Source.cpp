/********************************************************************************
 *		vDIAMONDS
 *		author(s): Lennart Richter
 *		adapted from: array version from class
 *		other citations:
 *
 *		goal: Output a diamond of user determined size – must use a 2D vector.
 *		example: for input of 5	  *       for an input of 6       /\
 *										 ***                             //\\
 *									   *****                           ///\\\
 *										 ***                            \\\///
 *										  *                              \\//
 *                                                              \/
 *		overview:(1)  ...
 ********************************************************************************/


#include <iostream> 
#include <vector>

int main()
{
	const int MAX_WIDTH = 80;
	const char BACKGRND_CHAR = '.';
	const char ODD_CHAR = ' * ';

	unsigned int size;
	std::cin >> size;
	if (size > MAX_WIDTH) {
		std::cout << "The size must be between 1 and 80."
	}


	return 0;
} // end main()