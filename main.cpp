#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Jet.h"
#include "Skateboard.h"
#include "Moped.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
    std::cout << "Driving simulator" << std::endl;
    int size = 12;
    int capacity = 16;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Jet("Rocket","NAA","P-51 Mustang", 3);
    vehiclesArray[7] = new Jet();
    vehiclesArray[8] = new Skateboard("Birdhouse", "Full Skull");
    vehiclesArray[9] = new Skateboard("Zoo York", "Empire");
    vehiclesArray[10] = new Moped("TaoTao","Eagle150", "Gasoline", 150);
    vehiclesArray[11] = new Moped();

    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
