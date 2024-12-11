#ifndef AUTHOR 
#define AUTHOR 
#include <string>
#include <iostream>
using namespace std;

class Author
{
    private:
    string name;
    string surname;
    public:
    Author():name(""), surname(""){};
    Author(string name, string surname):name(name), surname(surname){};
    string toString(){
        return name + " " + surname;
    };

    string getName(){
        return name;
    };
    string getSurname(){
        return surname;
    };
    void print(){
        cout << name << " " << surname << endl;
    };
};
#endif