#pragma once
#include <iostream>
#include <string>
#include "Engine.h"

class Bike :public Engine {
private:
	std::string make;
	int engineVolume;
public:
	void showEngineType() override {
		std::cout << "EngineType: " << typeOfEngine << std::endl;
	}
	void showCylinders() override {
		std::cout << "Cylinders: " << cylinder << std::endl;
	}
	void showHP() override {
		std::cout << "HorsePower: " << horsepower << std::endl;
	}
};