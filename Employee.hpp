#pragma once
#include <ctime>
#include <iostream>
#include "Person.hpp"
#include "Pharmacy.hpp"
class Pharmacy;
class Employee : public Person
{
private:
    //Salary of the Employee
    double salary;
    //Starting Year Of The Employment
    int startingYearEmployment;
    //Address of the Employee
    string address;
    //Pharmacy which the employee is working for
    Pharmacy* pharmacyWorking = nullptr;
public:
    //EMPTY-CONSTRUCTOR
    Employee() : salary(0.0), startingYearEmployment(0), address("Unknown"){};
    //CONSTRUCTOR BY CREATING NEW PERSON
    Employee(string _firstName, string _lastName, double _salary, int _startingYearEmployment, string _address) : Person(_firstName,_lastName), salary(_salary), startingYearEmployment(_startingYearEmployment), address(_address){};
    //COMPLETE CONSTRUCTOR
    Employee(Person& person, double _salary, int _startingYearEmployment, string _address) : Person(person), salary(_salary), startingYearEmployment(_startingYearEmployment), address(_address){};
    //Getter of the pharmacy which the employee is working for
    Pharmacy* getPharmacy();
    //Setter of the pharmacy which the employee is working for
    void linkWithPharmacy(Pharmacy& pharmacy);
    //Setter of the pharmacy which the employee is working for (NULL)
    void unlinkWithPharmacy();
    //OVERLOADING << OPERATOR TO PRINT THE EMPLOYEE
    friend ostream& operator<< (ostream& stream, const Employee& employee);
    //Setter of the salary of the employee
    void setSalary(double amount);
    //Raise Salary (salary+amount)
    void raiseSalary(double amount);
    //Decrease Salary (salary-amount)
    void decreaseSalary(double amount);
    //Setter of the address of the employee
    void setAddress(string _address);
};
