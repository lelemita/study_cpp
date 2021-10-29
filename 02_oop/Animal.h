#pragma once
#include <iostream>

namespace samples
{
    class Animal
    {
        // friend ostream& operator<<(ostream& os, Cat& c);
        public:
            Animal();
            Animal(int age);
            virtual ~Animal();
            int GetAge() const;
            // void Speak() const;
            virtual void Speak() const = 0;
            int GetAge();
        private:
            int mAge;
    };
}
