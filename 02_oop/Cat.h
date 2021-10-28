#pragma once
#include <iostream>
#include <cstring>
#include "Animal.h"

namespace samples
{
    class Cat : public Animal
    {
        // friend std::ostream& operator<<(std::ostream& os, Cat& c);
        public:
            friend std::ostream& operator<<(std::ostream& os, Cat& c);
            Cat(int age, const char* name);
            virtual ~Cat();
            void Speak() const;
            std::string Purr() const;
        private:
            char* mName;
    };
}