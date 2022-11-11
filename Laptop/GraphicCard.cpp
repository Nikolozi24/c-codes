#include "GraphicCard.h"
#include<string>
#include<iostream>
GraphicCard::GraphicCard(std::string model, std::string type, int GrapicCardSpeed,
							int SizeOfVRAM, float cost) //constructor of Grapic card
{
	this->model = model;
	this->type = type;
	this->GrapicCardSpeed = GrapicCardSpeed;
	this->SizeOfVRAM = SizeOfVRAM;
	this->cost = cost;
};
void GraphicCard::DisplayGrapicCard() {
	std::cout<<"\n XXXXXXXXXX Grapic Card Detailed XXXXXXXXXXX \n";		//Grapic card Dispcription
	std::cout<<"Model: " <<this->model<<" \n";		
	std::cout<<"Type: " <<this->type<<" \n";
	std::cout<<"Grapic Card Speed: "<<this->GrapicCardSpeed<<" GHZ \n";
	std::cout<< "Size Of VRAM: " <<this->SizeOfVRAM<<std::endl;
	std::cout << "Cost: $ " << this->cost << std::endl;
};