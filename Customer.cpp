#include "Customer.hpp"
bool operator == (const Customer& customer, const Customer& customer2){
return customer.identify == customer2.identify;
}
ostream& operator<< (ostream& stream, const Customer& customer){
    stream<<*(customer.identify)<<" "<<customer.email<<endl;
    return stream;
}
void Customer::linkWithPharmacy(Pharmacy* pharmacy){
    pharmacyRegistered = pharmacy;
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