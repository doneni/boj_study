#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;

    string str;
    for(int i = 1; i <= T; i++)
    {
        cout << "String #" << i << '\n';
        cin >> str;
        for(const auto& s : str)
        {
            if(s == 'Z')
                cout << 'A';
            else
                cout << (char)(s + 1);
        }
        cout << '\n' << '\n';
    }

    return 0;
}