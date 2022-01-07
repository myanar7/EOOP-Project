#pragma once

#include <list>

#include "Employee.hpp"
#include "Customer.hpp"
#include "Medicament.hpp"
class Medicament;
class Customer;


class Pharmacy {
    private:
      string name;
      string address;
      list<Employee> employees;
      list<Customer> customers;
      list<Medicament> medicaments;
    public:
      Pharmacy() : name("Unkown Apteka") {};
      Pharmacy(string _name) : name(_name){};
      void addMedicament(string _name, double _price);
      Employee* findEmployee(int id);
      Employee* findEmployee(Employee& employee);
      Customer* findCustomer(int id);
      Customer* findCustomer(Customer& customer);
      Medicament* findMedicament(int id);
      Medicament* findMedicament(Medicament& medicament);
      void fireEmployee(Employee& employee);
      void hireEmployee(Person& person, double salary, string address);
      void createMembership(Person& person, string email, string phoneNumber);
      void removeMembership(Customer& customer);
};