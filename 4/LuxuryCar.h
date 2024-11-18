#pragma once
#include "car.h"
#include<>
class LuxuryCar : public virtual Car { // Віртуальне публічне наслідування
private:
    string luxuryBrand; // Бренд автомобіля
    bool hasPremiumInterior; // Наявність преміум-салону

public:
    // Конструктор з параметрами
    LuxuryCar(int iO, bool cO, int dL, string cM, string idC, int rP, string lB, bool pI)
        : Car(iO, cO, dL, cM, idC, rP), luxuryBrand(lB), hasPremiumInterior(pI) {}

    // Конструктор за замовчуванням
    LuxuryCar() : Car(), luxuryBrand("Generic"), hasPremiumInterior(false) {}

    // Метод для отримання бренду
    string getLuxuryBrand() const {
        return luxuryBrand;
    }

    // Метод для перевірки наявності преміум-салону
    bool getHasPremiumInterior() const {
        return hasPremiumInterior;
    }

    // Метод для виведення інформації про LuxuryCar
    void displayInfo() const override {
        Car::printCarInfo();
        cout << "Luxury Brand: " << luxuryBrand << endl;
        cout << "Premium Interior: " << (hasPremiumInterior ? "Yes" : "No") << endl;
    }
};
