#include <iostream>
using namespace std;

string s[26];

void init()
{
    int k = 2;
    for(int i = 0; i < 5; i++)
    {
        string str = "";
        for(int j = 0; j < 3; j++)
        {
            str += to_string(k);
            s[3 * i + j] = str;
        }
        k++;
    }
    string str = "";
    for(int j = 0; j < 4; j++)
    {
        str += to_string(k);
        s[3 * 5 + j] = str;
    }
    str = ""; k++;
    for(int j = 0; j < 3; j++)
    {
        str += to_string(k);
        s[3 * 5 + 4 + j] = str;
    }
    str = ""; k++;
    for(int j = 0; j < 4; j++)
    {
        str += to_string(k);
        s[3 * 6 + 4 + j] = str;
    }
    return;
}

int main()
{
    init();
    int t = 0; cin >> t;
    getchar();
    for(int T = 1; T <= t; T++)
    {
        string in; getline(cin, in);
        cout << "Case #" << T << ": ";
        for(int i = 0; i < in.size(); i++)
        {
            if(i != 0 && (in[i - 1] == in[i] || (in[i] != ' ' && in[i - 1] != ' ' && s[in[i - 1] - 'a'][0] == s[in[i] - 'a'][0])))
                cout << ' ';
            cout << (in[i] == ' ' ? "0" : s[in[i] - 'a']);
        }
        cout << '\n';
    }
    return 0;
}
