#include "Customer.hpp"
#include "Utilities.hpp"

ostream& operator<< (ostream& stream, const Customer& customer){
    stream<<(Person)customer<<" "<<customer.email<<endl;
    return stream;
}
void Customer::linkWithPharmacy(Pharmacy& pharmacy){
    pharmacyRegistered.push_back(&pharmacy);
}
void Customer::unlinkWithPharmacy(Pharmacy& pharmacy){
    pharmacyRegistered.remove(&pharmacy);
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
void Customer::printPharmacies(){
    displayList(pharmacyRegistered,"Pharmacies");
}