/*
 *Madison Vandersluis
 */

#include "Skateboard.h"
#include <cstdlib>
#include <cmath>

Skateboard::Skateboard(string brand, string model){
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){
	double mileage = time*(10 + (rand()%50))*.01;
	if(time>25 && time<250){
		int t = floor(time/3);
		mileage+= (1 + rand()%t);
	}

	return mileage;
}

string Skateboard::toString(){
	return "-> Skateboard\n" + Vehicle::toString();
}
