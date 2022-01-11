#pragma once

#include <list>

#include "Employee.hpp"
#include "Customer.hpp"
#include "Medicament.hpp"
class Medicament;
class Customer;


class Pharmacy {
    private:
    //Name of the Pharmacy
      string name;
    //Address of the Pharmacy
      string address;
    //List of the employees of the pharmacy
      list<Employee> employees;
    //List of the members (having membership) of the pharmacy
      list<Customer> customers;
    //List of the medicament stock of the pharmacy
      list<Medicament> medicaments;
    public:
    //EMPTY CONSTRUCTOR
      Pharmacy() : name("Unkown Apteka") {};
    //CONSTRUCTOR
      Pharmacy(string _name, string _address) : name(_name), address(_address){};
    //OVERLOADING FOR PRINT THE CLASS
      friend ostream& operator<< (ostream& stream, const Pharmacy& pharmacy);
    //Add a new medicament to the list
      void addMedicament(string _name, double _price, int _productID);
    //Finding employee by ID
      Employee* findEmployee(int id);
    //Finding employee by the reference
      Employee* findEmployee(Employee& employee);
    //Finding customer by ID
      Customer* findCustomer(int id);
    //Finding customer by the reference
      Customer* findCustomer(Customer& customer);
    //Finding medicament by ID
      Medicament* findMedicament(int index);
    //Finding medicament by the reference
      Medicament* findMedicament(Medicament& medicament);
    //Fire the employee by the reference
      void fireEmployee(Employee& employee);
    //Hire a new employee by the person reference, Create a new Employee
      void hireEmployee(Person& person, double salary, string address);
    //Create a new membership by the person reference, Create a new Customer
      void createMembership(Person& person, string email, string phoneNumber);
    //Remove the customer by the reference
      void removeMembership(Customer& customer);
};