#include <iostream>
#include <cstring>
using namespace std;

void addInput();
void reverseChars();
void printAddr();
void mirrorString();

int main(void) {
    // addInput();
    // reverseChars();
    // printAddr();
    mirrorString();
    return 0;
}

void mirrorString()
{
    string line = "Hello world!";
    line += " |";
    for (int i = line.size() - 2; i >= 0; i--)
    {
        line += line[i];
    }
    cout << line << endl;
}

void reverseChars()
{
    const int LINE_SIZE = 512;
    char line[LINE_SIZE];
    while(true)
    {    
        cout << "INSERT String or EOF: ";
        cin >> line;
        // str은 모든걸 받을 수 있어서, 못 받았다면 EOF 임
        if(cin.fail())
        {
            cin.clear();
            return;
        }
        char* p = line;
        char* q = line + strlen(line) -1;
        while ( p < q ) {
            char temp = *p;
            *p = *q;
            *q = temp;
            ++p;
            --q;
        }
        cout << line << endl;
    }
}

void printAddr()
{
    char ch;
    char* ptr;
    ptr = &ch;
    *ptr = 'A';
    cout << sizeof(*ptr) << endl;
    // char*는 주소값 출력에 캐스팅이 필요함: https://bigpel66.oopy.io/library/cpp/etc/5
    cout << sizeof(ptr) << " " << *ptr << " " << reinterpret_cast<void *>(ptr) << endl;
}

void addInput()
{
    int number;
    int sum = 0;
    while (true)
    {    
        cout << "INSERT Number or EOF: ";
        cin >> number;
        if (cin.eof()) 
        { 
            break; 
        }
        if (cin.fail()) 
        {
            cout << "Fail" << endl;
            cin.clear();
            cin.ignore(__LONG_LONG_MAX__, '\n');
            continue;
        }
        sum += number;
    }
    cin.clear();
    cout << "sum: " << sum << endl;
}

// eofbit - 엔터로 입력하는 것과, 파일로 리디랙션 할 때 차이에 주의
// 입력 버리기: cin. clear() ignore()
// 남아있는 한줄 다버리기: cin.ignore(__LONG_LONG_MAX__, '\n');