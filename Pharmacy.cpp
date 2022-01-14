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
    Employee emp = employee;
    this->employees.remove(&emp);
}
void Pharmacy::hireEmployee(Employee& employee, double salary){
    if(employee.getPharmacy() == nullptr && findEmployee(employee) == nullptr){
        employee.decreaseSalary(salary);
        employee.linkWithPharmacy(*this);
        employees.push_back(&employee);
    }
}
void Pharmacy::createMembership(Person& person, string email, string phoneNumber){
    Customer newCustomer(person,email,phoneNumber);
    if(findCustomer(newCustomer) == nullptr){
        newCustomer.linkWithPharmacy(*this);
        customers.push_back(&newCustomer);
    }
}
void Pharmacy::removeMembership(Customer& customer){
    Customer cus = customer;
    this->customers.remove(&cus);
}
