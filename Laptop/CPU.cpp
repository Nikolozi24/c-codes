#include "CPU.h"
CPU::CPU(std::string firm, std::string Type, std::string SocketType, int Cores,
	float BaseSpeed, float MaxSpeed, int LogicalProcessors, bool HyperVSupport, float
	L1CacheMemory, float L2CacheMemory, float L3CacheMemory)
{
	this->firm = firm;
	this->Type = Type;
	this->SocketType = SocketType;
	this->Cores = Cores;
	this->BaseSpeed = BaseSpeed;
	this->MaxSpeed = MaxSpeed;
	this->LogicalProcessors = LogicalProcessors;
	this->HyperVSupport = HyperVSupport;
	this->L1CacheMemory = L1CacheMemory;
	this->L2CacheMemory = L2CacheMemory;
	this->L3CacheMemory = L3CacheMemory;
}
void CPU::DisplayCpuInfo() {
	std::cout << "XXXX Display CPU Info XXXX" << std::endl;
	std::cout << "Firm: " << this->firm << std::endl;
	std::cout << "Processor Type: " << this->Type << std::endl;
	std::cout << "Socket Type: " << this->SocketType << std::endl;
	std::cout << "Cores: " << this->Cores << std::endl;
	std::cout << "Base Speed: " << this->BaseSpeed << std::endl;
	if (!MaxSpeed) {
		std::cout << "Max Speed: Unkknow" << std::endl;
	}
	else {
		std::cout << "Turbo Speed: " << this->MaxSpeed << std::endl;
	}
	std::cout << "Logical Processors: " << this->LogicalProcessors << std::endl;
	if (HyperVSupport) {
		std::cout <<"Hyper-V Support: " << " Yes" << std::endl;
	}
	else {
		std::cout << "Hyper-V Support: " << " No" << std::endl;
	}
	std::cout << "L1 Cache: " << this->L1CacheMemory << " KB" << std::endl;
	std::cout << "L2 Cache: " << this->L2CacheMemory << " MB" << std::endl;
	std::cout << "L3 Cache: " << this->L3CacheMemory << " MB" << std::endl;

}