#pragma once
#include "car.h"

class SUV : public virtual Car { // Віртуальне публічне наслідування
private:
    int offroadCapability; // Рівень прохідності

public:
    // Конструктор з параметрами
    SUV(int iO, bool cO, int dL, string cM, string idC, int rP, int oC)
        : Car(iO, cO, dL, cM, idC, rP), offroadCapability(oC) {}

    // Конструктор за замовчуванням
    SUV() : Car(), offroadCapability(50) {}

    // Метод для отримання прохідності
    int getOffroadCapability() const {
        return offroadCapability;
    }

    // Метод для виведення інформації про SUV
    void displayInfo() const override {
        Car::printCarInfo();
        cout << "Offroad Capability: " << offroadCapability << "/100" << endl;
    }
};
