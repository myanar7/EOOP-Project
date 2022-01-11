#include "Person.hpp"
ostream& operator<< (ostream& stream, const Person& person){
    stream<<person.firstName<<"   "<<person.lastName<<" "<<person.id;
    return stream;
}
bool operator==(Person& otherPerson, Person& otherPerson2){
    return otherPerson.getID() == otherPerson2.getID();
}
int Person::getID(){
    return id;
}