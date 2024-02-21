#include <iostream>
using namespace std;

int char2Idx(char c)
{
    return (int)c - 97;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;

    int ans = 0;
    string str;
    for(int i = 0; i < T; i++)
    {
        cin >> str;
        bool arr[26] = { 0, };
        char cur = str[0];
        bool flag = true;
        arr[char2Idx(cur)] = true;
        for(int j = 1; j < str.size(); j++)
        {
            if(cur == str[j])
                continue;
            cur = str[j];
            if(arr[char2Idx(str[j])])
            {
                flag = false;
                break;
            }
            arr[char2Idx(str[j])] = true;
        }

        if(flag)
            ans++;
    }
    cout << ans << '\n';

    return 0;
}