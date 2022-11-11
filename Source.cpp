#include<iostream>
#include <cctype>
bool isPrime(int a);
int main() {
	bool isContinue = true;
	while (isContinue) {
		int number;
		char YorN;
		std::cout << "please enter the natural number: ";
		std::cin >> number;
		if (number <= 0) {
			std::cout << "invalid number!\n";
			return 0;
		}
		if (isPrime(number)) {
			std::cout << "number is prime! \n";
		}
		else {
			std::cout << "number is not prime! \n";
		}
		std::cout << "do you want to continue?[y/n]: ";
		std::cin >> YorN;
		YorN = toupper(YorN);
		if (YorN == 'Y') {
			continue;
		}
		else
			if (YorN == 'N') {
				isContinue = false;
			}
			else {
				std::cout << "\ninvalid character !!!";
				return 0;
			}
	}
}
bool isPrime(int a) {
	bool isPrime = false;
	int number_of_dividers = 1;
	for (int i = 2; i <= a; ++i)
	{
		if (a % i == 0) {
			++number_of_dividers;
		}
	}
	if (number_of_dividers == 2) {
		isPrime = true;
	}
	return isPrime;
}