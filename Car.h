#pragma once
#include <iostream>
#include <string>
#include "Engine.h"

class Car :public Engine {
private:
	std::string make;
	std::string model;
	int year;
public:
	void showEngineType() override {
		std::cout << "EngineType: " << typeOfEngine << std::endl;
	}
	void showCylinders() override{
		std::cout << "Cylinders: " << cylinder << std::endl;
	}
	void showHP() override {
		std::cout << "HorsePower: " << horsepower << std::endl;
	}
};