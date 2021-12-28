#pragma once

namespace samples
{
    template<typename T>
    class MyList
    {
        public:
            MyList();
            virtual ~MyList() = default;

            int GetSize();
            void Insert(int index, T value);
            T Get(int index);
            
            void PushFront(T value);
            void PushBack(T value);
            T PopFront();
            T PopBack();
            
            void Erase(int index);
            void remove(const T& value);
            // iterator
        private:
            int size;
    };
}
