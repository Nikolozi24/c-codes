#include "RAM.h"
RAM::RAM(std::string Firm, std::string RAMSocketType,
	short Capacity, int ClockSpeed, float ElectricUsing){
	this->Firm = Firm;
	this->RAMSocketType = RAMSocketType;
	this->Capacity = Capacity;
	this->ClockSpeed = ClockSpeed;
	this->ElectricUsing = ElectricUsing;
}
void RAM::DisplayRam() {
	std::cout << " XXXX Display RAM Info XXXX" << std::endl;
	std::cout << "Firm: " << this->Firm << std::endl;
	std::cout << "RAM Socket  Type: " << this->RAMSocketType << std::endl;
	std::cout << "RAM Capacity: " << this->Capacity << " GB"<<std::endl;
	std::cout << "RAM Clock Speed: " << this->ClockSpeed << " Mhz" << std::endl;
	std::cout << "RAM Electry Using: " << this->ElectricUsing << " V" << std::endl;
}
