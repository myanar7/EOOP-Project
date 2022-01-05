#include "EGovernmentAPI.hpp"

    void EGovernmentAPI::addNewPerson(Person person){
        people.push_back(person);
    }
    Person* EGovernmentAPI::getPerson(int id){
        Person *perRef = nullptr;
        for(Person person : people){
            if(id == person.getID()){
            perRef = &person;
            break;
            }
        }
        return perRef;
    }
    void EGovernmentAPI::findPerson(){
        
    }