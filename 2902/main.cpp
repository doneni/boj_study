#include <iostream>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    for(size_t i = 0; i < str.size(); i++)
    {
        if('A' <= str[i] && str[i] <= 'Z')
            cout << str[i];
    }
    cout << '\n';
    
    return 0;
}
