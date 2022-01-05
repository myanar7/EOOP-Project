#pragma once
#include <ctime>
#include <iostream>
#include "Person.hpp"

class Employee
{
private:
    double salary;
    int startingYearEmployment;
    string address;
public:
    Person* identify;
    Employee() : salary(0.0), startingYearEmployment(0), address("Unknown"){};
    Employee(string _firstName, string _lastName, double _salary, int _startingYearEmployment, string _address) : identify(new Person(_firstName,_lastName)), salary(_salary), startingYearEmployment(_startingYearEmployment), address(_address){};
    Employee(Person& person, double _salary, int _startingYearEmployment, string _address) : identify(&person), salary(_salary), startingYearEmployment(_startingYearEmployment), address(_address){};
    friend bool operator == (const Employee& employee, const Employee& employee2);
    void raiseSalary(double amount);
    void decreaseSalary(double amount);
    void setAddress(string _address);
};