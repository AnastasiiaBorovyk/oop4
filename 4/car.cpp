#include "car.h"
#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include<fstream>

using namespace std;

Car::Car(int iO, bool cO, int dL, string cM, string IdCar, int rP) :
    insuranceOption(iO), confirmOrder(cO), damageLiability(dL), carModel(cM), IdCar(IdCar), rentalPrice(rP) {
};
Car::Car() : insuranceOption(2004588), confirmOrder(0), damageLiability(1000), carModel("Skoda Oktavia"), IdCar("BX1991BX"), rentalPrice(500) {
};
Car::Car(const Car& other)
    : insuranceOption(other.insuranceOption), confirmOrder(other.confirmOrder),
    damageLiability(other.damageLiability), carModel(other.carModel),
    IdCar(other.IdCar), rentalPrice(other.rentalPrice) {
    cout << carModel << endl;
}

int Car::getInsuranceOption() const {
    if (insuranceOption == 1) {
        return 200; // Вартість страхування для варіанту 1
    }
    else if (insuranceOption == 2) {
        return 500; // Вартість страхування для варіанту 2
    }
    else {
        return 0; // Якщо варіант не визначений
    }
};
bool Car::getConfirmOrder() const {
    return confirmOrder;
};
int Car::getDamageLiability()const {
    return damageLiability;
};
string Car::getCarModel()const {
    return carModel;
};
string Car::getIdCar()const {
    return IdCar;
};
int Car::getRentalPrice()const {
    return rentalPrice;
};

void Car::printCarInfo() const {
    cout << "Car model: " << carModel << ", Id car: " << IdCar
        << ", Rental price: " << rentalPrice << " " << endl;
};

//void Car::saveToFile(const string& filename) const {
//    ofstream outFile(filename, ios::app); // Відкриваємо файл для запису в кінець
//
//    if (outFile.is_open()) {
//        outFile << insuranceOption << " "
//            << confirmOrder << " "
//            << damageLiability << " "
//            << carModel << " "
//            << IdCar << " "
//            << rentalPrice << endl;
//        outFile.close();
//    }
//    else {
//        cout << "Eror open file." << endl;
//    }
//}
//
//void Car::loadFromFile(const string& filename) {
//    ifstream inFile(filename);
//
//    if (inFile.is_open()) {
//        inFile >> insuranceOption
//            >> confirmOrder
//            >> damageLiability
//            >> carModel
//            >> IdCar
//            >> rentalPrice;
//        inFile.close();
//    }
//    else {
//        cout << "Eror open file." << endl;
//    }
//}
//
//void Car::saveToStream(ofstream& outFile) const {
//    if (outFile.is_open()) {
//        outFile << insuranceOption << " "
//            << confirmOrder << " "
//            << damageLiability << " "
//            << carModel << " "
//            << IdCar << " "
//            << rentalPrice << endl;
//    }
//}
//
//int Car::CarCount = 0;
//
//void Car::carCount() {
//    cout << "Number of cars: " << CarCount << endl;
//}

//Car::~Car() {
//    CarCount--;
//}