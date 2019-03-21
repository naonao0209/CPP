#pragma once
#include <iostream>
#include <string>

class Engine {
	
public:
	std::string typeOfEngine;
	int cylinder, horsepower;
	virtual void showEngineType() {
		std::cout << "EngineType: " << typeOfEngine << std::endl;
	}
	virtual void showCylinders() {
		std::cout << "Cylinders: " << cylinder << std::endl;
	}
	virtual void showHP() {
		std::cout << "HorsePower: " << horsepower << std::endl;
	}
};
