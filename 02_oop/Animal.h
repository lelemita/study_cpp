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
            // void Speak() const;
            virtual void Speak() const = 0;
            inline int GetAge() const;
        private:
            int mAge;
    };

    // 구현체에는 inline 키워드 안 적어도 됨
    inline int Animal::GetAge() const
    {
        return mAge;
    }
}
