/*
 * Madison Vandersluis
 */

#include "Moped.h"
#include <cstdlib>

Moped::Moped(){
	ccEngineSize = 50;
	setBrand("Unknown");
	setModel("Unknown");
}

Moped::Moped(string brand, string model, string fuelType, int engineSize){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineSize(engineSize);
}

Moped::~Moped() = default;

int Moped::getEngineSize(){
	return ccEngineSize;
}

void Moped::setEngineSize(int engineSize){
	if(engineSize == 50 || engineSize == 150 || engineSize == 250){
		ccEngineSize = engineSize;
	}
	else{
		ccEngineSize = 50;
	}
}

double Moped::mileageEstimate(double time) { 
	//data source http://www.motorscootershopper.com/how-to-scooter.asp
	if(getEngineSize() == 50){
		return time*(58 + rand()%67)*.01;
	}
	else if(getEngineSize() == 150){
		return time*(83 + rand()%100)*.01;
	}
	else{
		return time*1.25;
	}
}

string Moped::toString(){
	return "-> Moped\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
		to_string(getEngineSize()) + "cc";
}

