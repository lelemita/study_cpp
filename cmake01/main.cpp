#include <iostream>
#include "foo.h"
#include "shape.h"

int main()
{
    std::cout << "foo : " << foo() << std::endl;
    Rectangle r(4, 5);
    std::cout << "Get size : " << r.GetSize() << std::endl;
    return 0;
}