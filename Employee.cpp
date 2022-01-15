#include "Employee.hpp"
ostream& operator<< (ostream& stream, const Employee& employee){
    stream<<(Person)employee<<"   "<<employee.salary<<endl;
    return stream;
}
void Employee::linkWithPharmacy(Pharmacy& pharmacy){
    pharmacyWorking = &pharmacy;
}
void Employee::unlinkWithPharmacy(){
    pharmacyWorking = nullptr;
}
void Employee::setSalary(double amount){
    salary = amount;
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
