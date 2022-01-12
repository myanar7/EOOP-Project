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
   people[0] == people[3];    // FALSE

   Pharmacy pharmacy1 = Pharmacy("the Best Pharmacy","Stare Miasto"); // Creates a new Pharmacy
   pharmacy1.addMedicament("Parol",20.3,11);    // Added Parol to the medicaments list in pharmacy1
   pharmacy1.addMedicament("Majezik",10.5,3);   // Added Majezik to the medicaments list in pharmacy1


   pharmacy1.hireEmployee(people[0],2000.0,"Woloska 141A"); //Hired a new Employee (people[0])
   Employee* empRef = pharmacy1.findEmployee(0); // Test of the finding Employee function
   if(empRef != nullptr){
      empRef->raiseSalary(500);     //Test of the raise salary
      empRef->decreaseSalary(400);     //Test of the decrease salary
      empRef->setAddress("Mokotow 25");      //Tesht of the setAddress 
      *(empRef->identify) == people[0];   // Test of the == operator / TRUE
      cout<<*empRef;                         //Test of the << operator
      pharmacy1.fireEmployee(*empRef);       // Fired the employee
   }
   



   pharmacy1.createMembership(people[4],"mail123@gmail.com","+48685505584");     //Created a new membership ( new customer)
   Customer* cusRef = pharmacy1.findCustomer(4); // Test of the finding Customer function
   if(cusRef!=nullptr){
      cusRef->linkWithPharmacy(&pharmacy1);     //Test of the link with pharmacy
      cusRef->setPhoneNumber("+48685648321");      //Test of the setPhoneNumber function
      cusRef->setEmail("changedMail@gmail.com");      //Test of the setEmail function
      cusRef->purchaseMedicament(*(pharmacy1.findMedicament(0)));    // Test of the purchasing function
      *(cusRef->identify) == people[4];   // Test of the == operator  / TRUE
      cout<<*cusRef;                                           //Test of the << operator
      pharmacy1.removeMembership(*cusRef);               // Test of removing the membership
   }

   
   


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