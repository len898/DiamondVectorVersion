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

	int size;
	std::cin >> size;
	if (size > MAX_WIDTH || size < 0) {
		std::cout << "The size must be between 1 and 80.";
	}

	std::vector<std::vector<char> > diamondVector(size, std::vector<char>(size));

	unsigned int row;
	unsigned int col;
	for (row = 0; row < diamondVector.size(); row++) {
		for (col = 0; col < diamondVector.size(); col++) {
			diamondVector.at(row).at(col) = '.';
		}
	}

	for (row = 0; row < diamondVector.size(); row++) {
		for (col = 0; col < diamondVector.size(); col++) {
			std::cout << diamondVector.at(row).at(col);
		}
		std::cout << std::endl;
	}


	return 0;
} // end main()