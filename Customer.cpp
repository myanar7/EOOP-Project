#include "Customer.hpp"
#include "Utilities.hpp"

Customer::~Customer(){
    email.clear();
    phoneNumber.clear();
    medicaments.clear();
    pharmacyRegistered.clear();
}
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
    displayList(pharmacyRegistered,"Pharmacies Which The Customer Registered");
}
void Customer::printMedicaments(){
    displayList(medicaments,"Medicaments Of The Customer");
}