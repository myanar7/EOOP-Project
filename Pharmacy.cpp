#include "Pharmacy.hpp"
#include "Utilities.hpp"

Pharmacy::~Pharmacy(){
    name.clear();
    address.clear();
    employees.clear();
    medicaments.clear();
    customers.clear();
}
ostream& operator<< (ostream& stream, const Pharmacy& pharmacy){
    stream<<pharmacy.name<<"   "<<pharmacy.address<<endl;
    return stream;
}
void Pharmacy::addMedicament(string _name, double _price, int _productID){
    Medicament*  newMedicament = new Medicament(_name,_price,this,_productID);
    if(findMedicament(_productID) == nullptr)
    medicaments.push_back(newMedicament);
}
Employee* Pharmacy::findEmployee(int id){
    return findObject(id,employees);
}
Employee* Pharmacy::findEmployee(Employee& employee){
    return findObject(employee,employees);
}
Customer* Pharmacy::findCustomer(int id){
    return findObject(id,customers);
}
Customer* Pharmacy::findCustomer(Customer& customer){
    return findObject(customer,customers);
}
Medicament* Pharmacy::findMedicament(int id){
    return findObject(id,medicaments);
}
Medicament* Pharmacy::findMedicament(Medicament& medicament2){
    return findObject(medicament2,medicaments);
}
void Pharmacy::fireEmployee(Employee& employee){
    if(&employee == nullptr) return;
    this->employees.remove(&employee);
    employee.unlinkWithPharmacy();
}
void Pharmacy::hireEmployee(Employee& employee, double salary){
    if(employee.getPharmacy() == nullptr && findEmployee(employee) == nullptr && &employee != nullptr){
        employee.setSalary(salary);
        employee.linkWithPharmacy(*this);
        employees.push_back(&employee);
    }
}
void Pharmacy::createMembership(Customer& customer){
    if(findCustomer(customer) == nullptr && &customer != nullptr){
        customer.linkWithPharmacy(*this);
        customers.push_back(&customer);
    }
}
void Pharmacy::removeMembership(Customer& customer){
    if(&customer == nullptr) return;
    this->customers.remove(&customer);
    customer.unlinkWithPharmacy(*this);
}
void Pharmacy::printEmployees(){
    displayList(employees,"Employees");
}
void Pharmacy::printCustomers(){
    displayList(customers,"Customers");
}
void Pharmacy::printMedicaments(){
    displayList(medicaments,"Medicaments");
}
