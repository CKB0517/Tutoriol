#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
	if (number == target)return true;

	if (number == target) {
		std::cout << "Correct !!";
		target = -1;
		return true;
	}
	else std::cout << "Wrong" << std::endl;
	return false;
	return 0;
}
int main(array<System::String ^> ^args)
{
	int guess;
	do {
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}
