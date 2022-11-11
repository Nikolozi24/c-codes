#pragma once
#include<iostream>
#include<string>
#include "MotherBoard.h"
#include "GraphicCard.h"
#include "CPU.h"
#include "RAM.h" 
class Laptop :public MotherBoard, public GraphicCard, public CPU, public RAM
{

	bool logic();
	Laptop(std::string firm, std::string Type, std::string SocketType, int Cores,
		float BaseSpeed, float MaxSpeed, int LogicalProcessors, bool HyperVSupport, float
		L1CacheMemory, float L2CacheMemory, float L3CacheMemory, std::string Firm, std::string RAMSocketType, short Capacity,
		int ClockSpeed, float ElectricUsin, std::string model, std::string type, int GrapicCardSpeed,
		int SizeOfVRAM, float cost, std::string firmMother, std::string Mothertype,
		std::string ProccesorSocketType, int ramSocketNum,
		std::string ramSocketType, bool SSD, bool HDD, float Cost);
	void DisplayLaptopInfo();
	void fillCPU()
}
