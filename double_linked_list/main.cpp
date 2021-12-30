#include <iostream>
#include "MyList.h"
using namespace samples;

int main(void)
{
    Test();

    MyList<int> *intList;
    // MyList<int> *intList = new MyList<int>();
    std::cout << intList->GetSize() << std::endl;
    return 0;
}