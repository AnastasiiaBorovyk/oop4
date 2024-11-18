#include "person.h"

using namespace std;


Person::Person(string n, int a, int id, string s, string addr, int num)
    : name(n), age(a), ID(id), status(s), address(addr), number(num) {}

void Person::printInfo() const {
    cout << "Name: " << name << "\nAge: " << age << "\nID: " << ID << "\nStatus: " << status
        << "\nAddress: " << address << "\nNumber: " << number << endl;
}

string Person::getName() const { return name; }
void Person::setName(const string& n) { name = n; }

int Person::getAge() const { return age; }
void Person::setAge(int a) { age = a; }

int Person::getID() const { return ID; }
void Person::setID(int id) { ID = id; }

string Person::getStatus() const { return status; }
void Person::setStatus(const string& s) { status = s; }

string Person::getAddress() const { return address; }
void Person::setAddress(const string& addr) { address = addr; }

int Person::getNumber() const { return number; }
void Person::setNumber(int num) { number = num; }