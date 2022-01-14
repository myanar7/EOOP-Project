#include "Employee.hpp"
ostream& operator<< (ostream& stream, const Employee& employee){
    stream<<(Person)employee<<"   "<<employee.salary<<endl;
    return stream;
}
bool operator == (Employee& employee,Employee& employee2){
    return &((Person)employee) == &((Person)employee2);
}
void Employee::linkWithPharmacy(Pharmacy& pharmacy){
    pharmacyWorking = &pharmacy;
}
void Employee::raiseSalary(double amount){
    salary += amount;
}
void Employee::decreaseSalary(double amount){
    salary -= amount;
}
void Employee::setAddress(string _address){
    address = _address;
}
Pharmacy* Employee::getPharmacy(){
    return pharmacyWorking;
}
