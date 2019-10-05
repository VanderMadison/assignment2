/*
 *Madison Vandersluis
 */

#ifndef DRIVINGSIMULATOR_MOPED_H
#define DRIVINGSIMULATOR_MOPED_H

#include "PoweredVehicle.h"

class Moped : public PoweredVehicle {
	private:
		int ccEngineSize;

	public:
		Moped();

		explicit Moped(string brand, string model, 
				stringFuelType, int engineSize);

		virtual ~Moped();
		int getEngineSize();
		void setEngineSize(int engineSize);
		virtual double mileageEstimate(double time);
		virtual string toString();
};

#endif
