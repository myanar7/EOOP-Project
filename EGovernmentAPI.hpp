#pragma once
#include "Person.hpp"
#include <list>

class EGovernmentAPI {
    private:
        list<Person> people;
    public:
        EGovernmentAPI() : people({}) {};
        EGovernmentAPI(list<Person> people): people(people){};
        void addNewPerson(Person person);
        Person* getPerson(int id);
        void findPerson();
};