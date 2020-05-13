#include "OutputMessages.h"

// This is an output method, it only displays main menu of this mini-game.
void OutputMessages::menuMessage() {
	std::cout << "'Guess the number' game, using different RNG methods." << std::endl;
	std::cout << "To select the RNG method choose from 1-to-3, where:" << std::endl;
	std::cout << "1 - mt19937() RNG," << std::endl;
	std::cout << "2 - rand() RNG," << std::endl;
	std::cout << "3 - Lehmer's RNG (LCG)." << std::endl;
	std::cout << "\nTo exit this app type '101'" << std::endl;
}

// Output method - all it doest is it places your input conveniently after the 'Your input here:' line.
void OutputMessages::inputMessage() {
	std::cout << "\n" << "Your input here:";
}

// Error message display for main menu.
void OutputMessages::errorMessage() {
	std::cout << "\n" << "Error! Try again!" << std::endl;
}

void OutputMessages::gamesInfo(std::string str) {
	std::cout << "\nYou have selected the "<< str <<". Game will now begin." << std::endl;
	std::cout << "\nI made a number between 0 and 10! Try to guess it!" << std::endl;
	std::cout << "Be aware! You only have 3 tries!" << std::endl;
}