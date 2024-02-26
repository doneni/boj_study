#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    while(1)
    {
        int l = 0, u = 0, n = 0, b = 0;
        getline(cin, str);
        if(cin.eof())
            break;
        for(const auto& s : str)
        {
            if('a' <= s && s <= 'z')
                l++;
            else if('A' <= s && s <= 'Z')
                u++;
            else if('0' <= s && s <= '9')
                n++;
            else if(s == ' ')
                b++;
        }
        cout << l << " " << u << " " << n << " " << b << '\n';

    }

    return 0;
}