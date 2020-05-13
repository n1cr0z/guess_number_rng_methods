#pragma once
#include <iostream>
#include <random> 
#include <time.h>

class OutputMessages {

public:

	void menuMessage();	                    // This is an output method, it only displays 'main menu' of this mini-game.
	void inputMessage();                    // Output method - all it doest is it places your input conveniently after the 'Your input here:' line.
	void errorMessage();                    // Error message display for main menu.
	void gamesInfo(std::string str);	    // Info display of every mini-game.

};