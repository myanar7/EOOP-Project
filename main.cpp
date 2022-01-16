#include <iostream>
#include "Pharmacy.hpp"

int Person::idCounter = 0;

void clearScreen();
int main() {


   Employee employees[] = {
      Employee("Ugurcan","Cakir",3000.0,2018,"Random Place"),
      Employee("Miralem","Pjanic",3000.0,2018,"Random Placee"),
   };
   Customer customers[] = {
      Customer("Necip","Uysal","necipuysal@gmail.com","+43556815562"),
      Customer("Domagoj","Vida","vidadomagoj@gmail.com","+54521547525")
   };

   Pharmacy pharmacy1 = Pharmacy("the Best Pharmacy","Warsaw"); // Creates a new Pharmacy
   Pharmacy pharmacy2 = Pharmacy("the Other Pharmacy","Krakow"); // Creates a new Pharmacy
   int choice = 0;
   while(choice == 0){
   cout<<"------ PHARMACY SYSTEM ------\n1. Start\n8. Test Simulation\n0. Exit\nEnter your choice(1-8-0): ";
   cin>>choice;
   clearScreen();
   switch (choice)
   {
   case 0:
      return 0;
      break;
   case 1:
      cout<<"------ Welcome ------ \n1. Pharmacy Owner\n2. Customer\n0. Return the Menu\nEnter your choice:(1-2-0) :";
      cin>>choice;
      clearScreen();
      switch (choice)
      {
      case 1:
        {
            cout<<"------ Pharmacy Panel ------ \n\nSelect Pharmacy: \n1."<<pharmacy1<<"\n2"<<pharmacy2<<"\nEnter your choice:(1-2) :";
         cin>>choice;
         clearScreen();
         Pharmacy* pharmacyPtr = nullptr;
         if(choice == 1){
            pharmacyPtr = &pharmacy1;
         }else if(choice == 2){
            pharmacyPtr = &pharmacy2;
         }else{
            choice = 0;
            break;
         }
         cout<<"------ Pharmacy Panel ------ \n\nWhat do you want to do ?: \n1. Add Medicament\n2. Hire Employee\n3. Fire Employee\nEnter your choice:(1-2-3) :";
         cin>>choice;
         clearScreen();
         if(choice == 1){
            string name;
            int product_id;
            double price;
            cout<<"Enter Name Of Product:";
            cin>>name;
            cout<<"Enter Product ID:";
            cin>>product_id;
            cout<<"Enter Price:";
            cin>>price;
            pharmacyPtr->addMedicament(name,price,product_id);
            clearScreen();
            break;
         }else if(choice == 2){
            for (int i = 0; i < 2; i++) 
               cout <<i+1<<". "<<employees[i];
            double salary;
            cout<<"Choose Employee(By Index):";
            cin>>choice;
            cout<<"Enter Salary:";
            cin>>salary;
            pharmacyPtr->hireEmployee(employees[choice-1],salary);
            clearScreen();
            break;
         }else if(choice == 3){
            pharmacyPtr->printEmployees();
            cout<<"Choose Employee(By Index):";
            cin>>choice;
            pharmacyPtr->fireEmployee(*pharmacyPtr->findEmployee(choice));
            clearScreen();
            break;
         }else{
            break;
         }
        }
      case 2:
         break;
      default:
         cout<<"INVALID INPUT\n";
         break;
      }
      break;
   case 8:
   {
            pharmacy1.hireEmployee(employees[0],500);
      pharmacy2.hireEmployee(employees[0],500);
      pharmacy1.hireEmployee(employees[1],600);
   
      pharmacy1.createMembership(customers[1]);
      pharmacy2.createMembership(customers[1]);

      pharmacy1.removeMembership(*pharmacy2.findCustomer(3));

      pharmacy1.fireEmployee(*pharmacy1.findEmployee(0));

      pharmacy2.hireEmployee(employees[0],600);

      pharmacy1.printEmployees();

      (pharmacy2.findCustomer(3))->printPharmacies(); // you must check nullity when use

      pharmacy1.addMedicament("Parol",20.3,11);    // Added Parol to the medicaments list in pharmacy1
      pharmacy1.addMedicament("Majezik",10.5,3);   // Added Majezik to the medicaments list in pharmacy1

      pharmacy2.addMedicament("Majezik",24.5,3);   // Added Majezik to the medicaments list in pharmacy1

      pharmacy1.printMedicaments();

      (pharmacy2.findCustomer(3))->purchaseMedicament(*pharmacy2.findMedicament(3));

      (pharmacy2.findCustomer(3))->printPharmacies();

      (pharmacy2.findCustomer(3))->printMedicaments();

      cout<<"Leave(1) or Return to the menu(0):";
      cin>>choice;
      break;
   }
   default:
      cout<<"INVALID INPUT\n";
      break;
   }
   choice = 0;
   }
   //clearScreen();
   return 0;
}
void clearScreen(){
   cout << string( 100, '\n' );
}
