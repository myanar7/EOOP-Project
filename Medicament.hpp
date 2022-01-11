#pragma once
#include "Pharmacy.hpp"
#include <string>

using namespace std;

class Pharmacy;

class Medicament{
    private:
        //Product ID of Medicament
        int productID;
        //Name of the product
        string name;
        //Price of the product
        double price;
        //Pointer of the pharmacy which the product is stored in
        Pharmacy* stored;
    public:
        //CONSTUCTOR -- PRODUCT ID REQUIRED
        Medicament(int _productID):name("Unknown"), price(0.0), productID(_productID) {};
        //CONSTRUCTOR
        Medicament(string _name, double _price, Pharmacy* _stored, int _productID): name(_name), price(_price), stored(_stored), productID(_productID) {};
        //OVERLOADING << OPERATOR TO PRINT THE DETAILS
        friend ostream& operator<< (ostream& stream, const Medicament& medicament){stream<<medicament.name<<" "<<medicament.price<<" "<<medicament.productID<<endl;return stream;};
        //OVERLOADING == OPERATOR
        friend bool operator == (const Medicament& medicament, const Medicament& medicament2){return medicament.productID == medicament2.productID;};
        //Getter of the price variable for public access
        double getPrice() {return price;};

};