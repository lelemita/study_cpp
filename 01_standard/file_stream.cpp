#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readTxt();

int main(void) {
    readTxt();
}

void readTxt() {
    ifstream fin;
    fstream fout;
    fin.open("hello.txt");
    fout.open("only_nums.txt", ios_base::out);

    // 숫자만 읽기
    // fin.ignore(__LONG_LONG_MAX__, ' '); 가 '\n'을 인식 못하는 문제 대응
    int number;
    string trash; 
    while (true)
    {
        fin >> number;
        if (!fin.fail())
        {
            // fout << number << endl;
            fout << number << "\n";
            fout.flush();
            continue;
        }
        if (fin.eof())
        {
            break;
        }
        fin.clear();
        fin >> trash;
    }

    fout.close();

    // // 한 글자씩 읽기
    // char character;
    // while (true)
    // {
    //     fin.get(character);
    //     if (fin.fail())
    //     {
    //         break;
    //     }
    //     cout << character;
    // }

    // // 한 줄씩 읽기
    // while (true) {
    //     string line;
    //     getline(fin, line);
    //     if (fin.fail())
    //     {
    //         break;
    //     }
    //     cout << line << endl;
    // }

    // // 한 단어씩 읽기
    // while (true)
    // {
    //     string word;
    //     fin >> word;
    //     if (fin.fail())
    //     {
    //         break;
    //     }
    //     cout << word << " ";
    // }

    // scope 벗어나면 자동으로 닫히기는 함.
    fin.close();
}