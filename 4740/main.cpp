#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    while(1)
    {
        getline(cin, str);
        if(str == "***")
            break;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }

    return 0;
}