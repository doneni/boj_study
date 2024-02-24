#include <iostream>
#include <vector>
using namespace std;

string caesar(string c, int n)
{
    for(int i = 0; i < c.size(); i++)
        c[i] = ('z' < c[i] + n) ? c[i] + n - 26 : c[i] + n;

    return c;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string cipher;
    int n = 0;
    cin >> cipher >> n;
    vector<string> dict(n);
    for(int i = 0; i < n; i++)
        cin >> dict[i];
    
    for(int i = 0; i < 26; i++)
    {
        string str = caesar(cipher, i);
        for(int j = 0; j < n; j++)
        {
            if(str.find(dict[j]) != string::npos)
            {
                cout << str << '\n';
                return 0;
            }
        }
    }
    
    return 0;
}