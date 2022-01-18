#include <list>
#include <string>
#include <iostream>

using namespace std;

template <class T>  
// template function to print all objects in a list

//!!!!!!!!!!!!!!!!! NULLITY KONTROL ETTIGINDEN EMIN OL !!!!!!!!!!!!!!!!!!!
void displayList(list<T> const & list, string titleOfList)
{
    if(list.empty()) return;
    cout<< "--------- "<< titleOfList <<" ---------"<<"\n"<<"\n";
    for (auto const &i: list) {
        cout << *i << endl;
    }
}
template <class T>
// template function to get object in a list by object
T* findObject(T& t, list<T*> const & list){
    for(T* t2 : list){
        if(t == *t2){
            return t2;
        }
    }
    return nullptr;
}
template <class T>
// template function to get object in a list by id
T* findObject(int i, list<T*> const & list){
    for(T* t2 : list){
        if(*t2 == i){
            return t2;
        }
    }
    return nullptr;
}