#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    cin >> str;

    int h = 0;
    char p = ' ';
    for(size_t i = 0; i < str.size(); i++)
    {
        if(str[i] == p)
            h += 5;
        else
            h += 10;
        p = str[i];
    }
    cout << h << '\n';

    return 0;
}