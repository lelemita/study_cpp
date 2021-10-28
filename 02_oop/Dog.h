#pragma once
#include <iostream>
#include <cstring>
#include "Animal.h"

namespace samples
{
    class Dog : public Animal
    {
        // friend std::ostream& operator<<(std::ostream& os, const Dog& d);
        public:
            friend std::ostream& operator<<(std::ostream& os, Dog& d);
            Dog(int age, const char* name);
            Dog(const Dog& other);
            virtual ~Dog();
            void Speak() const;
            std::string Bark() const;
        private:
            char* mName;
    };
}