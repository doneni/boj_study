#include <iostream>
using namespace std;

int main()
{
    string str; getline(cin, str);
    if(str[0] != '"' || str.back() != '"' || str == "\"\"" || str.size() < 3)
    {
        cout << "CE";
    }
    else
    {
        for(int i = 1; i < str.size() - 1; i++)
        {
            if(str[i] == '"')
            {
                cout << "CE";
                return 0;
            }
        }
        for(int i = 1; i < str.size() - 1; i++)
            cout << str[i];
    }
    return 0;
}
