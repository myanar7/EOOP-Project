#include <iostream>
#include "Pharmacy.hpp"

int Person::idCounter = 0;
void clearScreen();
int main() {
   list<Person> people = {
      Person("Michael","Jackson"),
      Person("Alexander","Mazy"),
      Person("James","Wellinton"),
      Person("Necip","Uysal"),
      Person("Can","Bozdogan"),
      Person("Relay","Belly")
   };

   Pharmacy pharmacy1 = Pharmacy("Mustafa");

   pharmacy1.addMedicament("Parol",20.3);

   pharmacy1.hireEmployee(people.front(),2000.0,"Ebesinin körü");     // şu index dışında ne olacak onu bi çöz
   
   
   //Employee emp = *empRef;
   //*(empRef->identify) == people.front();
   //empRef = &emp;
   
   Employee* empRef = pharmacy1.findEmployee(0);
   //pharmacy1.fireEmployee(*empRef);
   
   pharmacy1.createMembership(people.back(),"Initial Mail","+905377094503");
   Medicament* medicament = new Medicament("Aspirin",10.5,&pharmacy1);
   Customer* cusRef = pharmacy1.findCustomer(5);
   cusRef->setEmail("Mail Changed");
   cusRef->purchaseMedicament(*medicament);
   cusRef = pharmacy1.findCustomer(5);
   empRef = pharmacy1.findEmployee(0);
   
   empRef = nullptr;
   //cusRef = nullptr;





   clearScreen();
   return 0;
}
void clearScreen(){
   cout << string( 100, '\n' );
}