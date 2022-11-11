
#pragma once
#include<iostream>
#include<string>
class RAM
{
	short Capacity;
	int  ClockSpeed;
	float ElectricUsing;
	std::string RAMSocketType;
	std::string Firm;
	RAM(std::string Firm, std::string RAMSocketType, short Capacity,
		int ClockSpeed,float ElectricUsing);
	void DisplayRam();
};

