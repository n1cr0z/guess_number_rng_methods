#include <iostream>
#include <random> 
#include <time.h>

class GameOverCheck {
public:

	// This method gets bool variable from rdmGameMt19937() method. If it gets 'true' - then display 'You won!'. If 'false' - 'You lost!'.
	void gameOverMessage(bool winOrLose, int* ptrMystNumb);

};
