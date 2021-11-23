#include <iostream>
#include "MyMath.h"
using namespace std;

int main() {
    cout << Add<int>(10, 20) << endl;
    cout << Add<float>(1.11f, 2.22f) << endl;
    cout << Add<string>("aaa", "bbb") << endl;
    return 0;
}