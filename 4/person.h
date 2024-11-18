#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
protected:
    int age;
    int ID;
    string status;
    string address;
    int number;

public:
    string name;
    Person(string n, int a, int id, string s, string addr, int num);

    string getName() const;
    void setName(const string& n);

    int getAge() const;
    void setAge(int a);

    int getID() const;
    void setID(int id);

    string getStatus() const;
    void setStatus(const string& s);

    string getAddress() const;
    void setAddress(const string& addr);

    int getNumber() const;
    void setNumber(int num);
    void printInfo() const;
};