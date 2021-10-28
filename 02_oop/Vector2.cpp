#include <iostream>
#include "Vector2.h"
using namespace std;

Vector2::Vector2() 
    : mX(0)
    , mY(0)
{}

Vector2::Vector2(int x, int y)
    : mX(x)
    , mY(y)
{}

Vector2::~Vector2()
{
    // cout << "소멸!" << endl;
}

int Vector2::GetX() const
{
    return mX;
}

// 연산자 오버로딩 by 멤버함수
Vector2 Vector2::operator+(const Vector2& rhs) const
{
    Vector2 sum;
    sum.mX = mX + rhs.mX;
    sum.mY = mY + rhs.mY;
    return sum;
}
bool Vector2::operator==(const Vector2& rhs) const
{
    return (mX == rhs.mX && mY == rhs.mY);
}
Vector2 Vector2::operator*(const Vector2& rhs) const
{
    Vector2 result(mX * rhs.mX, mY * rhs.mY);
    return result;
}
Vector2 Vector2::operator*(int multiplier) const
{
    Vector2 result(multiplier * mX, multiplier * mY);
    return result;
}
Vector2 operator*(int multiplier, const Vector2& v)
{
    return v * multiplier;
}
Vector2& Vector2::operator*=(const Vector2& rhs)
{
    mX *= rhs.mX;
    mY *= rhs.mY;
    return *this; // 이거 없어도 되는데?
}
Vector2& Vector2::operator*=(const int multiplier)
{
    mX *= multiplier;
    mY *= multiplier;
    return *this;
}


// 연산자 오버로딩 by 전역함수
ostream& operator<<(ostream& os, const Vector2& rhs)
{
    os << rhs.mX << ", " << rhs.mY;
    return os;
}

int main()
{
    Vector2 v1(1, 2);
    Vector2 v2(10, 20);
    cout << v1 + v2 << endl;
    cout << (v1 == v2) << endl;
    cout << v1 * v2 << endl;
    cout << v1 * 2 << endl;
    cout << 2 * v1 << endl;
    v1 *= 10;
    cout << v1 << endl;
    v1 *= v2;
    cout << v1 << endl;
    return 0;
}