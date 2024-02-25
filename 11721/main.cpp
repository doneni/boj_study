#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str = "";
    cin >> str;
    
    for(int i = 0; i < str.size(); i++)
    {
        cout << str[i];
        if(i % 10 == 9)
            cout << '\n';
    }
    return 0;
}