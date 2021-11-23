#include <iostream>
#include <vector>
#include <map>
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
    cout << endl << "==================" << endl;

    map<string, int> simpleScoreMap;
    simpleScoreMap.insert(pair<string, int>("Anne", 100));
    simpleScoreMap.insert(pair<string, int>("Coco", 50));
    simpleScoreMap["Anne"] = 0;
    cout << "map size : " << simpleScoreMap.size() << endl;

    map<string, int>::iterator it = simpleScoreMap.find("Coco");
    if (it != simpleScoreMap.end())
    {
        it->second = 22;
    }

    cout << simpleScoreMap["Coco"] << endl;
    return 0;
}