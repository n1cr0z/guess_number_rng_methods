#include "GameOverCheck.h"

void GameOverCheck::gameOverMessage(bool winOrLose, int* ptrMystNumb) {
	if (winOrLose == 1) {
		std::cout << "\nCongratulations! You won!" << std::endl;
		std::cout << "\nMy number was: " << *ptrMystNumb << "\n" << std::endl;
	}
	else {
		std::cout << "\nSorry! You lost!" << std::endl;
		std::cout << "\nMy number was: " << *ptrMystNumb << "\n" << std::endl;
	}
}
