#include <iostream>
using namespace std;

int main(void)
{
    while(1)
    {
        int f_idx = 0, b_idx = 0;
        bool flag = true;
        string str;
        cin >> str;
        if (str == "0")
            break;
        if (str.length() == 1)
        {
            cout << "yes" << endl;
            continue;
        }
        while(1)
        {
            b_idx = str.length() - 1 - f_idx;
            if (f_idx >= b_idx)
            {
                cout << "yes" << endl;
                break;
            }
            if (str[f_idx++] != str[b_idx])
            {
                cout << "no" << endl;
                break;
            }
        }
    }
    return 0;
}