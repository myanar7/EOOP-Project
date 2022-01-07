#include "Customer.hpp"
bool operator == (const Customer& customer, const Customer& customer2){
return customer.identify == customer2.identify;
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
void Customer::purchaseMedicament(Medicament& medicamentPtr){
    medicaments.push_back(&medicamentPtr);
}