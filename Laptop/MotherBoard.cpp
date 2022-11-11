#include "MotherBoard.h"
#include<iostream>
#include<string>
MotherBoard::MotherBoard(std::string firm, std::string type,
	std::string ProccesorSocketType, int ramSocketNum,
	std::string ramSocketType, bool SSD, bool HDD, float cost)
{
	this->firm = firm;
	this->type = type;
	this->ProccesorSocketType = ProccesorSocketType;
	this->ramSocketNum = ramSocketNum;
	this->ramSocketType = ramSocketType;
	this->SSD = SSD;
	this->HDD = HDD;
	this->cost = cost;
}
void MotherBoard::DisplayMotherboard() {
	std::cout<<"XXXX Display Motherboard Info XXXX"<<std::endl;
	std::cout<<"Firm: "<<this->firm<<std::endl;
	std::cout<<"type: "<<this->type<<std::endl;
	std::cout<<"Proccesor Socket type: "<< this->ProccesorSocketType << std::endl;
	std::cout<<"Ram Socket numbers: " << this->ramSocketNum << std::endl;
	std::cout << "RAM Socket Type: " << this->ramSocketType << std::endl;
	if (SSD) {
		std::cout << "SSD: " << "Yes"<<std::endl;
	}
	else {
		std::cout << "SSD: NO" << std::endl;
	}
	if (HDD) {
		std::cout << "HDD: " << "YES" << std::endl;
	}
	else {
		std::cout << "HDD: " << " NO" << std::endl;
	}
	std::cout << "Cost: $" << this->cost << std::endl;

}
