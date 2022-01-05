#pragma once
#include "Person.hpp"
#include <ctime>

class Customer
{
private:
    string email;
    string phoneNumber;
    const time_t registerDate = time(0);
    //list<Order> orderHistory; içinde de order tarihi veren satıcı alan müşteri bilgileri falan olsun miktar işlem kayıt no
    
public:
    Person* identify;
    Customer() : identify() , email("Unknown"), phoneNumber("Unknown"){};
    Customer(string _firstName, string _lastName, string _email, string _phoneNumber): identify(new Person(_firstName,_lastName)), email(_email), phoneNumber(_phoneNumber){};
    Customer(Person& person, string _email, string _phoneNumber): identify(&person), email(_email), phoneNumber(_phoneNumber){};
    friend bool operator == (const Customer& customer, const Customer& customer2);
    void setEmail(string _email);
    void setPhoneNumber(string _phoneNumber);
    //void showOrderHistory();
};