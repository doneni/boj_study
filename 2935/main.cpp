#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string n1 = "", n2 = "";
    char op = ' ';
    cin >> n1 >> op >> n2;
    if(op == '*')
    {
        int digit = n1.size() + n2.size() - 2;
        cout << 1;
        if(digit)
        {
            for(int i = 0; i < digit; i++)
                cout << 0;
        }
        cout << '\n';
    }
    else
    {
        string larger = n1;
        if(n1.size() < n2.size())
            larger = n2;
        for(int i = 0; i < larger.size(); i++)
        {
            if(i == larger.size() - n1.size() && n1.size() == n2.size())
                cout << 2;
            else if(i == larger.size() - n1.size())
                cout << 1;
            else if(i == larger.size() - n2.size())
                cout << 1;
            else
                cout << 0;
        }
        cout << '\n';
    }

    return 0;
}