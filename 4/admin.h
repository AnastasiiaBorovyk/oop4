#pragma once
#include "car.h"
#include"person.h"
#include<iostream>

using namespace std;

class Admin : public Person {
private:

public:
	string requestStatus;


    Admin(const string& name, int age, int id, const string& status,
        const string& address, int number, const string& reqStatus)
        : Person(name, age, id, status, address, number), requestStatus(reqStatus) {}

    void printAdminInfo() const {
        printInfo();  // Виклик методу базового класу
        cout << "Request Status: " << requestStatus << endl;
    }
};
