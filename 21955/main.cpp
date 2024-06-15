#include <iostream>
using namespace std;

int main()
{
    string str1;
    string str2;
    cin >> str1;
    int size = str1.size();
    str2 = str1.substr(size/2, size/2);
    str1 = str1.substr(0, size/2);
    cout << str1 << ' ' << str2 << endl;
    return 0;
}
