#include <iostream>
using namespace std;

string ans = "";

int cover(string word)
{
    if(word.size() % 2 != 0)
        return -1;
    while(word.size() >= 4)
    {
        ans += "AAAA";
        for(int i = 0; i < 4; i++)
            word.erase(word.begin());
    }
    while(word.size() >= 2)
    {
        ans += "BB";
        for(int i = 0; i < 2; i++)
            word.erase(word.begin());
    }
    return 0;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    cin >> str;
    
    string word = "";
    for(size_t i = 0; i < str.size(); i++)
    {
        if(str[i] == '.')
        {
            if(cover(word) == -1)
            {
                cout << -1 << '\n';
                return 0;
            };
            word.clear();
            ans += str[i];
        }
        else if(i == str.size() - 1)
        {
            word += str[i];
            if(cover(word) == -1)
            {
                cout << -1 << '\n';
                return 0;
            };
        }
        else
        {
            word += str[i];
        }
    }
    cout << ans << '\n';
    
    return 0;
}