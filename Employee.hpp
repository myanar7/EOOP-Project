#pragma once
#include <ctime>
#include <iostream>
#include "Person.hpp"

class Employee
{
private:
    //Salary of the Employee
    double salary;
    //Starting Year Of The Employment
    int startingYearEmployment;
    //Address of the Employee
    string address;
public:
    //Pointer of the person
    Person* identify;
    //EMPTY-CONSTRUCTOR
    Employee() : salary(0.0), startingYearEmployment(0), address("Unknown"){};
    //CONSTRUCTOR BY CREATING NEW PERSON
    Employee(string _firstName, string _lastName, double _salary, int _startingYearEmployment, string _address) : identify(new Person(_firstName,_lastName)), salary(_salary), startingYearEmployment(_startingYearEmployment), address(_address){};
    //COMPLETE CONSTRUCTOR
    Employee(Person& person, double _salary, int _startingYearEmployment, string _address) : identify(&person), salary(_salary), startingYearEmployment(_startingYearEmployment), address(_address){};
    //OVERLOADING == OPERATOR
    friend bool operator == (const Employee& employee, const Employee& employee2);
    //OVERLOADING << OPERATOR TO PRINT THE EMPLOYEE
    friend ostream& operator<< (ostream& stream, const Employee& employee);
    //Raise Salary (salary+amount)
    void raiseSalary(double amount);
    //Decrease Salary (salary-amount)
    void decreaseSalary(double amount);
    //Setter of the address of the employee
    void setAddress(string _address);
};