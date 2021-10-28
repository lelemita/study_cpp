#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;

int main()
{
    // 개체 in stack
    samples::Cat c(1, "kitty");
    // c.Speak();
    cout << c << " say " << c.Purr() << endl;

    // 개체 in heap (new)
    samples::Cat* myCat = new samples::Cat(2, "neo");
    cout << (*myCat) << endl;
    // myCat->Speak();
    delete myCat;

    samples::Animal* yourCat = new samples::Cat(3, "betty");
    cout << (*dynamic_cast<samples::Cat*>(yourCat)) << endl;
    // cout << (*yourCat) << endl;
    // (*yourCat).Speak();
    // yourCat->Speak();
    delete yourCat;

    samples::Dog* myDog = new samples::Dog(1, "Snoopy");
    cout << ">> heap! " << (*myDog) << " say" << myDog->Bark() << endl;
    delete myDog;

    samples::Dog yourDog(2, "goopy");
    cout << ">> stack! " << yourDog << " say" << yourDog.Bark() << endl;

    samples::Dog twinDog(3, "foo");
    cout << ">> copy! " << twinDog << " say" << twinDog.Bark() << endl;
    return 0;
}