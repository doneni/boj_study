#include <iostream>
using namespace std;

int main() {
    string str;
    while(1)
    {
            if(cin.eof())
                break;
            getline(cin, str);
            cout << str << '\n';
    }
    
    return 0;
}