#include <iostream>
#include "MyList.h"
namespace samples
{
    // template<class T>
    // MyList<T>::MyList()
    // {
    //     std::cout << "born" << std::endl;
    // }

    template<class T>
    int MyList<T>::GetSize() const
    {
        return 99;
    }

    void Test()
    {
        std::cout << "test" << std::endl;
    }
}