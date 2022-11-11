#pragma once
#include<iostream>

 class   MotherBoard
{
	std::string type ="";
	std::string firm = "";
	std::string ramSocketType = "";
	std::string ChipsetType="";
	int ramSocketNum;
	bool SSD=false, HDD=false;
	std::string ProccesorSocketType ="";
	float cost;
public:
	MotherBoard(std::string firm, std::string type,
		std::string ProccesorSocketType, int ramSocketNum,
		std::string ramSocketType, bool SSD, bool HDD , float cost);
	void DisplayMotherboard();
};

