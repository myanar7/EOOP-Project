#pragma once

#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
    const string firstName;
    const string lastName;
    int id;
public:
    static int idCounter;
    Person() : firstName("Unknown"), lastName("Unknown"), id(idCounter){idCounter++;};
    Person(string _firstName,string _lastName):firstName(_firstName), lastName(_lastName), id(idCounter){idCounter++;};
    friend bool operator== (Person& otherPerson, Person& otherPerson2);
    int getID();
};