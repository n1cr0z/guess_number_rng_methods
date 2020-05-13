#pragma once
#include <iostream>
#include <random> 
#include <time.h>
#include "OutputMessages.h"


class RNGmethods : OutputMessages {

public:

	unsigned short int userGuess;                           // User's guess of randomly generated number.
	bool localBool;                                         // Functions will return this bool variable - if true(1) : You guessed; false(0) : You didn't guess.
	std::string str;

	// LCG RNG using Lehmer's method.
	uint32_t nLehmer = 0;

	uint32_t Lehmer32() {
		nLehmer += 0xe120fc15;
		uint64_t tmp;
		tmp = (uint64_t)nLehmer * 0x4a39b70d;
		uint32_t m1 = (tmp >> 32) ^ tmp;
		tmp = (uint64_t)m1 * 0x12fad5c9;
		uint32_t m2 = (tmp >> 32) ^ tmp;

		return m2;
	}

public:

	bool RNGgameSwitch(int* ptrMystNumb, int rngSwitch);    // RNG mini-games using different methods: mt19937(), rand() and Lehmer's RNG (LCG).

};

