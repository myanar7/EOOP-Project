#pragma once
#include "Pharmacy.hpp"
#include <string>

using namespace std;

class Pharmacy;

class Medicament{
    private:
        string name;
        double price;
        Pharmacy* stored;
    public:
        Medicament():name("Unknown"), price(0.0) {};
        Medicament(string _name, double _price, Pharmacy* _stored): name(_name), price(_price), stored(_stored) {};
        double getPrice() {return price;};

};