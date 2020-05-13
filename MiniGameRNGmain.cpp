#include <iostream>
#include <random> 
#include <time.h>
#include "GameOverCheck.h"
#include "RNGmethods.h"
#include "OutputMessages.h"

int main()
{

	OutputMessages msG;    // Enabling messages output class.
	RNGmethods rngM;       // Enabling different RNG methods class.
	GameOverCheck gmC;     // Enabling game over output class.


	int nSwitch = 0;       // Starting point for while and further switch-case variable.

	// Getting a pointer to the number that will be created from RNG method.
	int mysteryNumber;
	int* ptrMystNumb;
	ptrMystNumb = &mysteryNumber;

	bool gameOverCheck;    // Initializing bool variable for gameOverCheck() method.

	while(nSwitch != 101) {

		msG.menuMessage();
		msG.inputMessage();

		std::cin >> nSwitch;

	switch (nSwitch) {

	case 101:
		std::cout << "\nThank you for playing! Have a nice day!" << std::endl;
		break;

	// Mini-game using mt19937() RNG.
	case 1:
		gameOverCheck = rngM.RNGgameSwitch(ptrMystNumb, 1);
		gmC.gameOverMessage(gameOverCheck, ptrMystNumb);
		break;

	// Mini-game using rand() RNG.
	case 2:
		gameOverCheck = rngM.RNGgameSwitch(ptrMystNumb, 2);
		gmC.gameOverMessage(gameOverCheck, ptrMystNumb);
		break;

	// Mini-game using Lehmer's RNG.
	case 3:
		gameOverCheck = rngM.RNGgameSwitch(ptrMystNumb, 3);
		gmC.gameOverMessage(gameOverCheck, ptrMystNumb);
		break;

	default:
		msG.errorMessage();
		break;
	}
}
	return 0;
}