#pragma once

#include<iostream>
#include<string>
class GraphicCard
{
	std::string model = "";
	std::string type = "";
	int GrapicCardSpeed;
	int SizeOfVRAM;
	float cost;
public:
	GraphicCard(std::string model, std::string type, int GrapicCardSpeed,
		int SizeOfVRAM, float cost);// constructor of Grapic Cards 
	void DisplayGrapicCard();// Displays Detaild in Command prompt
};

