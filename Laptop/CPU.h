#pragma once
#include<iostream>
#include<string>
class CPU
{
	std::string firm;
	std::string Type;
	std::string SocketType;
	int Cores;
	float BaseSpeed;
	float MaxSpeed = 0;
	int LogicalProcessors;
	bool HyperVSupport = false;
	float L1CacheMemory;
	float L2CacheMemory;
	float L3CacheMemory;
public:
	CPU(std::string firm, std::string Type, std::string SocketType, int Cores,
		float BaseSpeed, float MaxSpeed, int LogicalProcessors, bool HyperVSupport , float
		L1CacheMemory, float L2CacheMemory, float L3CacheMemory	);
	void DisplayCpuInfo();

};

