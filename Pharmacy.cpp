#include "Pharmacy.hpp"

ostream& operator<< (ostream& stream, const Pharmacy& pharmacy){
    stream<<pharmacy.name<<"   "<<pharmacy.address<<endl;
    return stream;
}
void Pharmacy::addMedicament(string _name, double _price, int _productID){
    Medicament*  newMedicament = new Medicament(_name,_price,this,_productID);
    if(findMedicament(*newMedicament) == nullptr)
    medicaments.push_back(newMedicament);
}
Employee* Pharmacy::findEmployee(int id){
    for(Employee*& employee : employees){
        if(id == employee->getID()){
            return employee;
        }
    }
    return nullptr;
}
Employee* Pharmacy::findEmployee(Employee& employee){
    for(Employee*& employee2 : employees){
        if(employee == *employee2){
            return employee2;
        }
    }
    return nullptr;
}
Customer* Pharmacy::findCustomer(int id){
    for(Customer*& customer : customers){
        if(id == customer->getID()){
            return customer;
        }
    }
    return nullptr;
}
Customer* Pharmacy::findCustomer(Customer& customer){
    for(Customer*& customer2 : customers){
        if(customer == *customer2){
            return &customer;
        }
    }
    return nullptr;
}
Medicament* Pharmacy::findMedicament(int index){
    int iterator = 0;
    for(Medicament*& medicament : medicaments){
        if(index == iterator){
            return medicament;
        }else{
            iterator++;
        }
    }
    return nullptr;
}
Medicament* Pharmacy::findMedicament(Medicament& medicament2){
    for(Medicament*& medicament : medicaments){
        if(medicament2 == *medicament){
            return medicament;
        }
    }
    return nullptr;

}
void Pharmacy::fireEmployee(Employee& employee){
    this->employees.remove(&employee);
    employee.unlinkWithPharmacy();
}
void Pharmacy::hireEmployee(Employee& employee, double salary){
    if(employee.getPharmacy() == nullptr && findEmployee(employee) == nullptr){
        employee.setSalary(salary);
        employee.linkWithPharmacy(*this);
        employees.push_back(&employee);
    }
}
void Pharmacy::createMembership(Customer& customer){
    if(findCustomer(customer) == nullptr){
        customer.linkWithPharmacy(*this);
        customers.push_back(&customer);
    }
}
void Pharmacy::removeMembership(Customer& customer){
    this->customers.remove(&customer);
    customer.unlinkWithPharmacy(*this);
}

template <class T>  
// Template overloading of function
void displayList(list<T> const & list, string titleOfList)
{
    cout<< "--------- "<< titleOfList <<" ---------"<<"\n"<<"\n";
    for (auto const &i: list) {
        cout << *i << endl;
    }
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
