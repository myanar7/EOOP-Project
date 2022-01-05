#pragma once

#include <list>

#include "Employee.hpp"
#include "Customer.hpp"

class Pharmacy {
    private:
      string name;
      string address;
      list<Employee> employees;
      list<Customer> customers;
    public:
      Pharmacy() : name("Unkown Apteka") {};
      Pharmacy(string _name) : name(_name){};
      Employee* findEmployee(int id);
      Employee* findEmployee(Employee& employee);
      Customer* findCustomer(int id);
      Customer* findCustomer(Customer& customer);
      void fireEmployee(Employee& employee);
      void hireEmployee(Person& person, double salary, string address);
      void createMembership(Person& person, string email, string phoneNumber);
      void removeMembership(Customer& customer);
};