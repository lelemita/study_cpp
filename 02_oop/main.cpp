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
    // cout << (*yourCat) << endl;
    cout << (*dynamic_cast<samples::Cat*>(yourCat)) << endl;
    // (*yourCat).Speak();
    // yourCat->Speak();
    delete yourCat;

    // 스택에 사는 개 복사 -> OK?
    samples::Dog yourDog(2, "goopy");
    cout << ">> stack! " << yourDog << " in " << &yourDog << endl;
    samples::Dog twinDog(yourDog);
    cout << "copy-> " << twinDog << " in " << &twinDog << endl;

    // 힙에 사는 개 복사 -> 출력이 안되는 중
    samples::Dog *myDog = new samples::Dog(1, "Snoopy");
    cout << ">> heap! " << *myDog << " say" << myDog->Bark() << endl;
    cout << "addr : " << myDog << endl;
    delete myDog;

    samples::Dog& d1 = *myDog;  // d1은 myDog의 별칭
    // cout << "copy-> " << *d1 << endl;   // 혹시.. operator=를 오버로딩 해야함??
    cout << "copy-> " << &d1 << endl;
    cout << "copy-> " << *&d1 << endl;
    cout << "copy-> " << d1 << endl;
    samples::Dog d2(*myDog);
    cout << "copy2 -> " << d2 << endl;

    cout << "------------------" << endl;
    // 왜 나는 캐스팅 한대로 동작하지..;;
    samples::Animal* cat1 = new samples::Cat(4, "Lulu");
    samples::Dog* dcat = static_cast<samples::Dog*>(cat1);
    cout << dcat->Bark() << endl;
    samples::Cat* ccat = static_cast<samples::Cat*>(cat1);
    cout << ccat->Purr() << endl;

    // 기본형으로 테스트해보기
    // stack
    int n1 = 10;
    int& n2 = n1;
    int n3(n1);
    cout << n1 << " " << n2 << " " << n3 << endl;
    cout << &n1 << " " << &n2 << " " << &n3 << endl;

    // heap
    int* n4 = new int(10); // 힙에 생기는거 맞나..?
    int& n5 = *n4;
    int n6(*n4);
    cout << *n4 << " " << n5 << " " << n6 << endl;
    cout << &n4 << " " << &n5 << " " << &n6 << endl;
    n5 = 11;
    cout << *n4 << " " << n5 << " " << n6 << endl;

    samples::Cat c1(10, "titi");
    cout << c1 << " : " << c1.GetType() << endl;
    cout << "global cat type : " << samples::Cat::GetType() << endl;
    return 0;
}