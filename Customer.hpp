#pragma once

#include "Pharmacy.hpp"
#include "Medicament.hpp"
#include <list>
#include <ctime>

class Pharmacy;

class Customer
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
    Pharmacy* pharmacyRegistered;
public:
    //Pointer of the person
    Person* identify;
    //EMPTY CONSTRUCTOR
    Customer() : identify() , email("Unknown"), phoneNumber("Unknown"){};
    //CONSTRUCTOR BY CREATING NEW PERSON
    Customer(string _firstName, string _lastName, string _email, string _phoneNumber): identify(new Person(_firstName,_lastName)), email(_email), phoneNumber(_phoneNumber){};
    //COMPLETE CONSTURCTOR
    Customer(Person& person, string _email, string _phoneNumber): identify(&person), email(_email), phoneNumber(_phoneNumber){};
    //OVERLOADING == OPERATOR
    friend bool operator == (const Customer& customer, const Customer& customer2);
    //OVERLOADING << OPERATOR TO PRINT DETAILS
    friend ostream& operator<< (ostream& stream, const Customer& customer);
    //Setter of the Pharmacy Registered
    void linkWithPharmacy(Pharmacy* pharmacy);
    //Setter of the email
    void setEmail(string _email);
    //Setter of the phone number
    void setPhoneNumber(string _phoneNumber);
    //Purchasing the medicament
    void purchaseMedicament(Medicament& medicament);

};