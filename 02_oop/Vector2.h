#pragma once
#include <iostream>

class Vector2
{
    public:
        Vector2();
        Vector2(int x, int y);
        
        // 소멸자
        ~Vector2();
        // 복사생성자
        Vector2(const Vector2& other);

        // 연산자 오버로딩 by 멤버함수
        Vector2 operator+(const Vector2& rhs) const;
        bool operator==(const Vector2& rhs) const;
        Vector2 operator*(const Vector2& rhs) const;
        // Vector * int
        Vector2 operator*(int multifplier) const;
        // int * Vector
        friend Vector2 operator*(int multiplier, const Vector2& v);
        Vector2& operator*=(const Vector2& rhs);
        Vector2& operator*=(int multiplier);
        
        // 연산자 오버로딩 by 전역함수
        friend std::ostream& operator<<(std::ostream& os, const Vector2& rhs);

        int GetX() const;
        int GetY() const;
        void SetX(int x);
        void SetY(int y);
        
        void Add(const Vector2& vector);
        bool isEqual(const Vector2& v) const;
        Vector2 Multiply(const Vector2& v) const;
        Vector2 Multiply(int multiplier) const;
        void Scale(const Vector2& v);
        void Scale(int multiplier);

    private:
        int mX;
        int mY;
};