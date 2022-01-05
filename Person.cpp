#include "Person.hpp"

bool operator==(Person& otherPerson, Person& otherPerson2){
    return otherPerson.getID() == otherPerson2.getID();
}
int Person::getID(){
    return id;
}