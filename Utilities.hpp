#include <list>
#include <string>
#include <iostream>

using namespace std;

template <class T>  
// Template overloading of function
void displayList(list<T> const & list, string titleOfList)
{
    cout<< "--------- "<< titleOfList <<" ---------"<<"\n"<<"\n";
    for (auto const &i: list) {
        cout << *i << endl;
    }
}