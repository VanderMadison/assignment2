/*
 *Madison Vandersluis
 */

#include "Jet.h"
#include <cstdlib>

Jet::Jet(){

	numberOfEngines = 1;
	setBrand("Unknown");
	setModel("Unknown");
	setFuelType("Jet A-1");
}

Jet::Jet(string fuelType, string brand, string model, int engineNum){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineNum(engineNum);
}

Jet::~Jet() = default;

int Jet::getEngineNum(){
	return numberOfEngines;
}

void Jet::setEngineNum(int engineNum){
	if(engineNum<1){
		numberOfEngines = 1;
	}
	else{
		numberOfEngines = engineNum;
	}
}

double Jet::mileageEstimate(double time){
	double mileage = time*(40 + (rand() % 60));
	if(getEngineNum() >= 2 && getFuelType()=="Rocket"){ //boosts mileage by 5.5 percent per engine
		for (int i=0; i<getEngineNum(); i++){
			mileage*=1.055;
		}
	}
	return mileage;
}

string Jet::toString(){
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
		getEngineNum();
}

