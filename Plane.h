#pragma once
#include <iostream>
#include <string>
#include "Engine.h"

class Plane :public Engine {
private:
	int numberOfEngines;
	int liftroad;
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

	Plane() : numberOfEngines{ 0 }, liftroad{ 0 }{}
	Plane(int numberOfEngines, int liftroad) : numberOfEngines{ numberOfEngines }, liftroad(liftroad){}
	Plane(const Plane &copyObj){
		numberOfEngines = copyObj.numberOfEngines;
		liftroad = copyObj.liftroad;
	}
	~Plane(){}
	int getNumberOfEngines() const { return numberOfEngines; }
	int getLiftroad() const { return liftroad; }

	Plane operator +(const Plane &newPlane) const {
		Plane plane;
		plane.numberOfEngines = this->numberOfEngines + newPlane.numberOfEngines;
		plane.liftroad = this->liftroad + newPlane.liftroad;
	}

	bool operator ==(const Plane &obj)const {
		return(this->numberOfEngines == obj.numberOfEngines)
			&& (this->liftroad == obj.liftroad);
	}

	bool operator !=(const Plane &obj) const {
		return !(*this == obj);
	}
	

	

};