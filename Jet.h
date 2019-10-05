/*
 *Madison Vandersluis
 *Due: 10/4/2019
 */

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {
	
	private:
		int numberOfEngines;
	
	public:
		Jet();

		explicit Jet(string fuelType, string brand, string model, int engineNum = 1);

		virtual ~Jet();
		int getEngineNum();
		void setEngineNum(int engineNum);
		virtual double mileageEstimate(double time);
		virtual string toString();

};

#endif
