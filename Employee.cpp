#include "Employee.hpp"
ostream& operator<< (ostream& stream, const Employee& employee){
    stream<<*(employee.identify)<<"   "<<employee.salary<<endl;
    return stream;
}
bool operator == (const Employee& employee, const Employee& employee2){
    return employee.identify == employee2.identify;
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