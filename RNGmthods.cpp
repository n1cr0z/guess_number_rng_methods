#include "RNGmethods.h"

// RNG mini-games using different methods: mt19937(), rand() and Lehmer's RNG (LCG).
bool RNGmethods::RNGgameSwitch(int* ptrMystNumb, int rngSwitch) {

	switch (rngSwitch) {
	case 1: {
		std::mt19937 gen(time(0));                     // Linkig mt19937() with time seed.
		std::uniform_int_distribution<> uid(0, 10);    // Numbers will be uniformely distributed between 0 and 10.
		*ptrMystNumb = uid(gen);                       // Now randomly generated number is stored in mysterNumber variable.
		str = "mt19937() RNG";
		break;
	}
	case 2: {
		srand(time(0));                                // Linkig rand() with time seed.
		*ptrMystNumb = rand() % 10 + 0;                // Generating number between 0 and 10.
		str = "rand() RNG";
		break;
	}
	case 3: {
		nLehmer = time(0);                             // Linking nLehmer directrly to seed.
		*ptrMystNumb = Lehmer32() % 10 + 0;
		str = "Lehmer's RNG (LCG)";
		break;
	}
	default:
		errorMessage();
		break;
	}

	gamesInfo(str);

	for (int j = 0; j < 3; j++) {

		inputMessage();
		std::cin >> userGuess;

		if (userGuess > * ptrMystNumb) {
			std::cout << "\nOops! You guess is GREATER than my number!" << std::endl;
			std::cout << "Try again!" << std::endl;
			std::cout << "Attempts left:" << 2 - j << std::endl;
		}
		else if (userGuess < *ptrMystNumb) {
			std::cout << "\nOops! You guess is LESS than my number!" << std::endl;
			std::cout << "Try again!" << std::endl;
			std::cout << "Attempts left:" << 2 - j << std::endl;
		}
		else {
			return localBool = true;
		}
	}

	return localBool = false;
}
