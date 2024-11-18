#include <iostream>
#include<fstream>
#include <cstring>
#include "car.h"
#include "admin.h"
#include "client.h"
#include "electroCar.h"
#include "order.h"

using namespace std;


int main() {
    //Car regularCar(1, true, 1000, "Toyota Corolla", "AA1234BB", 600);
    //regularCar.saveToFile("cars.txt");

    // Створення об'єкта ElectroCar
    electroCar tesla(2, true, 2000, "Tesla Model S", "TESLA123", 1500, 100, 600);
    tesla.displayInfo();

    // Виклик методу з базового класу через об'єкт ElectroCar
    cout << "Rental Price for Tesla: " << tesla.calculateRentalPrice() << " UAH" << endl;

    // Використання конструктора за замовчуванням
    electroCar defaultElectroCar; 
    defaultElectroCar.displayInfo();


    order order("Kai", 30, 123456, "Active", "Lviv, St. Khreshchatyk, 10", 5551234,
        1, true, 5000, "Toyota Camry", "AA1234BB", 1000);



    order.printOrderInfo();

    return 0;
}