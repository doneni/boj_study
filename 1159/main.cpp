#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<string>& v1, vector<string>& v2)
{
    if(v1.size() >= 5 && v2.size() >= 5)
        return v1[0] > v2[0];
    return v1.size() < v2.size();
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    string name;
    vector<vector<string>> player(26);
    for(int i = 0; i < N; i++)
    {
        cin >> name;
        player[(int)(name.front() - 97)].push_back(name);
    }
    sort(player.begin(), player.end(), cmp);

    if(player.back().size() < 5)
    {
        cout << "PREDAJA";
    }
    while(1)
    {
        if(player.back().size() < 5)
            break;
        cout << player.back()[0][0];
        player.pop_back();        
    }
    cout << '\n';
    return 0;
}