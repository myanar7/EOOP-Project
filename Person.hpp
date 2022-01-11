#pragma once

#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
    //Name of the Person
    const string firstName;
    //Last Name of the Person
    const string lastName;
    //ID of the Person (Identification number | Each person has unique ID)
    const int id;
public:
    //Static ID Counter increase by one when created a new Person
    static int idCounter;
    //EMPTY CONSTRUCTOR
    Person() : firstName("Unknown"), lastName("Unknown"), id(idCounter){idCounter++;};
    //CONSTRUCTOR
    Person(string _firstName,string _lastName):firstName(_firstName), lastName(_lastName), id(idCounter){idCounter++;};
    //OVERLOADING == OPERATOR
    friend bool operator== (Person& otherPerson, Person& otherPerson2);
    //OVERLOADING << OPERATOR TO PRINT CONTENT
    friend ostream& operator<< (ostream& stream, const Person& person);
    //Getter of ID for public access
    int getID();
};