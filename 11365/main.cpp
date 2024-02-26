#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str = "";
    while(1)
    {
        getline(cin, str);
        if(str == "END")
            break;
        for(int i = 0; i < str.size(); i++)
            cout << str[str.size() - 1 - i];
        cout << '\n';
    }

    return 0;
}