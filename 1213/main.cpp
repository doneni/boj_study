#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string in; cin >> in;
    int f[26] = { 0, };
    vector<char> v;
    char center = ' ';
    for(const auto& e : in )
        f[e - 'A']++;
    for(int i = 0; i < 26; i++)
        if(f[i] % 2 == 0)
            for(int j = 0; j < f[i] / 2; j++)
                v.push_back(i + 'A');
        else if(center == ' ')
        {
            center = i + 'A';
            for(int j = 0; j < f[i] / 2; j++)
                v.push_back(i + 'A');
        }
        else
        {
            cout << "I'm Sorry Hansoo" << '\n';
            exit(0);
        }
    for(size_t i = 0; i < v.size(); i++)
        cout << v[i];
    if(center != ' ')
        cout << center;
    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    cout << '\n';
    return 0;
}

