#include <iostream>
#include "Pharmacy.hpp"

int Person::idCounter = 0;

void clearScreen();
int main() {


   Employee employees[] = {
      Employee("Ugurcan","Cakir",2000.0,2018,"Random Place"),
      Employee("Miralem","Pjanic",3000.0,2018,"Random Placee"),
   };
   Customer customers[] = {
      Customer("Necip","Uysal","necipuysal@gmail.com","+43556815562"),
      Customer("Domagoj","Vida","vidadomagoj@gmail.com","+54521547525")
   };

   Pharmacy pharmacy1 = Pharmacy("the Best Pharmacy","Warsaw"); // Creates a new Pharmacy
   Pharmacy pharmacy2 = Pharmacy("the Other Pharmacy","Krakow"); // Creates a new Pharmacy
   
   pharmacy1.hireEmployee(employees[0],500);
   pharmacy2.hireEmployee(employees[0],500);
   pharmacy1.hireEmployee(employees[1],600);
   
   pharmacy1.createMembership(customers[1]);
   pharmacy2.createMembership(customers[1]);

   pharmacy1.removeMembership(*pharmacy2.findCustomer(3));

   //pharmacy1.fireEmployee(*pharmacy1.findEmployee(0));

   //cout<<*(pharmacy1.findEmployee(0))<<endl;

   pharmacy1.printEmployees();









   pharmacy1.addMedicament("Parol",20.3,11);    // Added Parol to the medicaments list in pharmacy1
   pharmacy1.addMedicament("Majezik",10.5,3);   // Added Majezik to the medicaments list in pharmacy1


   //clearScreen();
   return 0;
}
void clearScreen(){
   cout << string( 100, '\n' );
}
