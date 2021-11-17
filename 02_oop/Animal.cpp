#include <iostream>
#include "Animal.h"

namespace samples
{
    Animal::Animal(int age)
        : mAge(age)
    {
    }

    Animal::~Animal()
    {
        // std::cout << mAge << " Animal 소멸!" << std::endl;
    }


    // void Animal::Speak() const
    // {
    //     std::cout << "Animal speaking" << std::endl;
    // }
}
