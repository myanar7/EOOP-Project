#include "Customer.hpp"
bool operator == (Customer& customer,Customer& customer2){
return (Person&)customer == (Person&)customer2;
}
ostream& operator<< (ostream& stream, const Customer& customer){
    stream<<(Person)customer<<" "<<customer.email<<endl;
    return stream;
}
void Customer::linkWithPharmacy(Pharmacy& pharmacy){
    pharmacyRegistered.push_back(&pharmacy);
}
void Customer::setEmail(string _email){
    email = _email;
}
void Customer::setPhoneNumber(string _phoneNumber){
    phoneNumber = _phoneNumber;
}
void Customer::purchaseMedicament(Medicament& medicament){
    medicaments.push_back(&medicament);
}