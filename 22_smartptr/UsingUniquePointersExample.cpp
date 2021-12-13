#include <iostream>
#include <memory>
#include "MyVector.h"
#include "UsingUniquePointersExample.h"
using namespace std;

namespace samples
{
    void UsingUniquePointersExample()
    {
        unique_ptr<int> num1 = make_unique<int>(10);
        unique_ptr<char> char1 = make_unique<char>('d');
        cout << *num1 <<endl;
        cout << *char1 <<endl;

        unique_ptr<MyVector> myVec = make_unique<MyVector>(3,5);
        cout << "X: " << myVec->GetX() << " ,Y: " << myVec->GetY() << endl;

        myVec.reset(new MyVector(1,5));
        cout << "X: " << myVec->GetX() << " ,Y: " << myVec->GetY() << endl;

        num1.reset();
        myVec = nullptr;
        cout << *num1 << endl;
        cout << "X: " << myVec->GetX() << " ,Y: " << myVec->GetY() << endl;

        unique_ptr<char> char2(move(char1));
        // cout << *char1 <<endl; // runtime error
        cout << *char2 <<endl;


    }
}