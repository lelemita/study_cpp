#include <iostream>
#include <cstring>
#include "Dog.h"
using namespace std;

namespace samples 
{
    Dog::Dog(int age, const char* name)
        :Animal(age)
    {
        size_t size = strlen(name) + 1;
        mName = new char[size];
        strcpy(mName, name);
    }

    Dog::Dog(const Dog& other)
        : Animal(other)     // other.mAge가 아니고.. ?!
    {
        mName = new char[strlen(other.mName) + 1];
        strcpy(mName, other.mName);
    }

    Dog::~Dog()
    {
        // cout << "Dog " << mName << " 소멸!" << endl;
        delete mName;
    }

    ostream& operator<<(ostream& os, Dog& d)
    {
        // os << d.mName << d.mAge;
        os << d.mName;
        return os;
    }

    string Dog::Bark() const
    {
        return string(" Bow ");
    }

    void Dog::Speak() const
    {
        cout << Bark() << endl;
    }
}