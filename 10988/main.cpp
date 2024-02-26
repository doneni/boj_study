#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    cin >> str;
    int head = 0;
    int tail = str.size() - 1;
    while(1)
    {
        if(head >= tail)
        {
            cout << 1 << '\n';
            break;
        }
        if(str[head++] != str[tail--])
        {
            cout << 0 << '\n';
            break;
        }
    }

    return 0;
}