#include <iostream>
#include <cstring>
#include "Cat.h"
using namespace std;

namespace samples
{
    Cat::Cat(int age, const char* name)
        : Animal(age)
    {
        size_t size = strlen(name) + 1;
        mName = new char[size];
        strcpy(mName, name);
    }

    Cat::~Cat()
    {
        // cout << mName << " 소멸" << endl;
        delete mName;
    }

    // oeverwriting
    void Cat::Speak() const
    {
        cout << Purr() << endl;
    }

    string Cat::Purr() const
    {
        return string("Meow");
    }

    ostream& operator<<(ostream& os, Cat& c)
    {
        // os << c.mName << ": " << c.mAge;
        os << c.mName;
        return os;
    }
}
