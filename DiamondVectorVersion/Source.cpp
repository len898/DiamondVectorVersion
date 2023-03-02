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



	if (size % 2 == 0) {
		return 0;
	}
	else {
		int starsForRow = size;
		unsigned int middle = size / 2;
		unsigned int offset = 0;
		unsigned int middleDistance = 0;

		while (starsForRow >= 1) {
			for (unsigned int numStars = 0; numStars < starsForRow; numStars++) {
				diamondVector.at(middle + offset).at(middleDistance + numStars) = '*';
				diamondVector.at(middle - offset).at(middleDistance + numStars) = '*';
			}
			starsForRow -= 2;
			offset += 1;
			middleDistance += 1;
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