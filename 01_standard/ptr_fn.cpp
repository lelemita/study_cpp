#include <iostream>
using namespace std;

// function pointer -> 함수를 인자로 전달하는데 유용
// int (*ptr_fn)(int, int)
int calc(int a, int b, int (*ptr_fn)(int, int)) {
    return ptr_fn(a, b);
}

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}

int main(void) {
    cout << calc(20, 10, add) << endl;
    cout << calc(20, 10, sub) << endl;
    return 0;
}