#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> scores;
    scores.reserve(5);
    scores.push_back(10);
    scores.push_back(30);
    scores.push_back(50);
    scores.pop_back();

    cout << "Current capacity : " << scores.capacity() << endl;
    cout << "Current size : " << scores.size() << endl;

    for (vector<int>::iterator iter = scores.begin(); iter != scores.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;
}