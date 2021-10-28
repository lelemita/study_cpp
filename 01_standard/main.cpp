#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct book {
    int id;
    char title[40];
    // string title;
};

int main(void)
{
    book one = {15, "first"};
    cout << one.id << " " << one.title << endl;

    string a;
    cout << "INSERT NAME OF BOOK: ";
    getline(cin, a);
    strcpy(one.title, a.c_str());
    // one.title = a;
    cout << hex << one.id << " " << one.title << endl;
    cout << dec << sizeof(one) << " "<< sizeof(int) << " " << sizeof(char[40]) << endl;
    return 0;
}


