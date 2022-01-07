#pragma once

#include "Pharmacy.hpp"
#include "Medicament.hpp"
#include <list>
#include <ctime>

class Pharmacy;

class Customer
{
private:
    string email;
    string phoneNumber;
    const time_t registerDate = time(0);
    list<Medicament*> medicaments;
    Pharmacy* pharmacyRegistered;
public:
    Person* identify;
    Customer() : identify() , email("Unknown"), phoneNumber("Unknown"){};
    Customer(string _firstName, string _lastName, string _email, string _phoneNumber): identify(new Person(_firstName,_lastName)), email(_email), phoneNumber(_phoneNumber){};
    Customer(Person& person, string _email, string _phoneNumber): identify(&person), email(_email), phoneNumber(_phoneNumber){};
    friend bool operator == (const Customer& customer, const Customer& customer2);
    void linkWithPharmacy(Pharmacy* pharmacy);
    void setEmail(string _email);
    void setPhoneNumber(string _phoneNumber);
    void purchaseMedicament(Medicament& medicamentPtr);

};