#pragma once

#include <list>

#include "Employee.hpp"
#include "Customer.hpp"
#include "Medicament.hpp"
class Medicament;
class Customer;
class Employee;

class Pharmacy {
    private:
    //Name of the Pharmacy
      string name;
    //Address of the Pharmacy
      string address;
    //List of the employees of the pharmacy
      list<Employee*> employees;
    //List of the members (having membership) of the pharmacy
      list<Customer*> customers;
    //List of the medicament stock of the pharmacy
      list<Medicament*> medicaments;
    public:
    //EMPTY CONSTRUCTOR
      Pharmacy() : name("Unkown Apteka") {};
    //CONSTRUCTOR
      Pharmacy(string _name, string _address) : name(_name), address(_address){};

      ~Pharmacy();
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
      Medicament* findMedicament(int id);
    //Finding medicament by the reference
      Medicament* findMedicament(Medicament& medicament);
    //Fire the employee by the reference
      void fireEmployee(Employee& employee);
    //Hire a new employee by the person reference, Create a new Employee
      void hireEmployee(Employee& employee, double salary);
    //Create a new membership by the person reference, Create a new Customer
      void createMembership(Customer& customer);
    //Remove the customer by the reference
      void removeMembership(Customer& customer);
    //Print the employee list
      void printEmployees();
    //Print the customers list
      void printCustomers();
    //Print the medicaments list
      void printMedicaments();
    //Check is empty or not
      bool isEmptyMedicaments() {return medicaments.empty();};
    //Check is empty or not
      bool isEmptyCustomers() {return customers.empty();};
    //Check is empty or not
      bool isEmptyEmployees() {return employees.empty();};
};
