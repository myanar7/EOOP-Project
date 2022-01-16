#pragma once

#include "Pharmacy.hpp"
#include "Medicament.hpp"
#include <list>
#include <ctime>

class Pharmacy;

class Customer : public Person
{
private:
    //Email address of the customer
    string email;
    //Phone Number of the customer
    string phoneNumber;
    //The date created the membership
    const time_t registerDate = time(0);
    //List of the pointers of the  medicaments which customer has
    list<Medicament*> medicaments;
    //Pointer of the pharmacy which the customer has the membership from
    list<Pharmacy*> pharmacyRegistered;
public:
    //EMPTY CONSTRUCTOR
    Customer() : email("Unknown"), phoneNumber("Unknown"){};
    //CONSTRUCTOR BY CREATING NEW PERSON
    Customer(string _firstName, string _lastName, string _email, string _phoneNumber): Person(_firstName,_lastName), email(_email), phoneNumber(_phoneNumber){};
    //COMPLETE CONSTURCTOR
    Customer(Person& person, string _email, string _phoneNumber): Person(person), email(_email), phoneNumber(_phoneNumber){};

    ~Customer();
    //OVERLOADING << OPERATOR TO PRINT DETAILS
    friend ostream& operator<< (ostream& stream, const Customer& customer);
    //Setter of the Pharmacy Registered (Inserting)
    void linkWithPharmacy(Pharmacy& pharmacy);
    //Setter of the Pharmacy Registered (Removing)
    void unlinkWithPharmacy(Pharmacy& pharmacy);
    //Setter of the email
    void setEmail(string _email);
    //Setter of the phone number
    void setPhoneNumber(string _phoneNumber);
    //Purchasing the medicament
    void purchaseMedicament(Medicament& medicament);

    void printPharmacies();

    void printMedicaments();
};