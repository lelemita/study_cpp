#pragma once
#include <iostream>

namespace samples
{
    class Animal
    {
        // friend std::ostream& operator<<(std::ostream& os, Animal& a);
        public:
            Animal();
            Animal(int age);
            virtual ~Animal();
            int GetAge() const;
            // void Speak() const;
            virtual void Speak() const = 0;
        private:
            int mAge;
    };
}
