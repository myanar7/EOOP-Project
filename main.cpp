#include <iostream>
#include "Pharmacy.hpp"

int Person::idCounter = 0;

void clearScreen();
int main() {


   Person people[]= {
      Person("Michael","Jackson"),
      Person("Alexander","Mazy"),
      Person("James","Wellinton"),
      Person("Necip","Uysal"),
      Person("Can","Bozdogan"),
      Person("Relay","Belly")
   };

   Pharmacy pharmacy1 = Pharmacy("Mustafa","Stare Miasto");
   pharmacy1.addMedicament("Parol",20.3,11);
   pharmacy1.addMedicament("Majezik",10.5,3);


   pharmacy1.hireEmployee(people[0],2000.0,"Woloska 141A");     // şu index dışında ne olacak onu bi çöz
   
   
   //Employee emp = *empRef;
   //*(empRef->identify) == people.front();
   //empRef = &emp;
   
   Employee* empRef = pharmacy1.findEmployee(0);
   //pharmacy1.fireEmployee(*empRef);
   cout<<*empRef;
   pharmacy1.createMembership(people[4],"Initial Mail","+905377094503");
   Customer* cusRef = pharmacy1.findCustomer(4);
   cusRef->setEmail("Mail Changed");
   cusRef->purchaseMedicament(*(pharmacy1.findMedicament(0)));
   empRef = pharmacy1.findEmployee(0);
   
   empRef = nullptr;
   cusRef = nullptr;
   delete empRef;
   delete cusRef;





   clearScreen();
   return 0;
}
void clearScreen(){
   cout << string( 100, '\n' );
}