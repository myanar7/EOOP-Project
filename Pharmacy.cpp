#include "Pharmacy.hpp"

void Pharmacy::addMedicament(string _name, double _price){
    medicaments.push_back(Medicament(_name,_price,this));
}
Employee* Pharmacy::findEmployee(int id){
    Employee* empRef = nullptr;
    for(Employee employee : employees){
        if(id == employee.identify->getID()){
            empRef = &employee;
            break;
        }
    }
    return empRef;
}
Employee* Pharmacy::findEmployee(Employee& employee){
    Employee* empRef = nullptr;
    for(Employee employee2 : employees){
        if(employee.identify->getID() == employee2.identify->getID()){
            empRef = &employee2;
            break;
        }
    }
    return empRef;
}
Customer* Pharmacy::findCustomer(int id){
    Customer* cusRef = nullptr;
    for(Customer customer : customers){
        if(id == customer.identify->getID()){
            cusRef = &customer;
            return cusRef;
        }
    }
    return cusRef;
}
Customer* Pharmacy::findCustomer(Customer& customer){
    Customer* cusRef = nullptr;
    for(Customer customer2 : customers){
        if(customer.identify->getID() == customer2.identify->getID()){
            cusRef = &customer;
            break;
        }
    }
    return cusRef;
}
void Pharmacy::fireEmployee(Employee& employee){
    Employee emp = employee;
    this->employees.remove(emp);
}
void Pharmacy::hireEmployee(Person& person, double salary, string address){
    employees.push_back(Employee(person,salary,2022,address));
}
void Pharmacy::createMembership(Person& person, string email, string phoneNumber){
    Customer newCustomer(person,email,phoneNumber);
    newCustomer.linkWithPharmacy(this);
    customers.push_back(newCustomer);
}
void Pharmacy::removeMembership(Customer& customer){
    Customer cus = customer;
    this->customers.remove(cus);
}