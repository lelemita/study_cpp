#include <iostream>
#include "MyMath.h"
using namespace std;

// 크기 제한 Vector
template<typename T, size_t N>
class FixedVector
{
    public:
        FixedVector();
        bool Add(const T& data);
        size_t GetSize() const;
        size_t GetCapacity() const;
    private:
        size_t mSize;
        T mArray[N];
};

template<typename T, size_t N>
FixedVector<T, N>::FixedVector()
    : mSize(0)
{}

template<typename T, size_t N>
size_t FixedVector<T, N>::GetSize() const
{
    return mSize;
}

template<typename T, size_t N>
size_t FixedVector<T, N>::GetCapacity() const
{
    return N;
}

template<typename T, size_t N>
bool FixedVector<T, N>::Add(const T& data)
{
    if (mSize >= N)
    {
        cout << "can't add " << data << endl;
        return false;
    }
    mArray[mSize++] = data;
    return true;
}

int main() {
    cout << Add<int>(10, 20) << endl;
    cout << Add<float>(1.11f, 2.22f) << endl;
    cout << Add<string>("aaa", "bbb") << endl;

    FixedVector<int, 3> numbers;
    numbers.Add(10);
    numbers.Add(20);
    numbers.Add(30);
    numbers.Add(40);
    numbers.Add(50);
    numbers.Add(60);
    cout << numbers.GetSize() << endl;
    cout << numbers.GetCapacity() << endl;
    return 0;
}