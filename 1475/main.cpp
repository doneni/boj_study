#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> &p1, pair<int,int> &p2)
{
    return p1.first > p2.first;
}

int main()
{
    int N = 0; cin >> N;
    vector<pair<int,int>> arr(9);
    for(int i = 0; i < 9; i++)
        arr[i].second = i;
    for(const auto& c : to_string(N))
    {
        if(c == '9')
        {
            arr[6].first++;
            continue;
        }
        arr[c - '0'].first++;
    }
    arr[6].first = (arr[6].first + 1) / 2;
    sort(arr.begin(), arr.end(), cmp);
    int ans = 0;
    cout << arr[0].first << '\n';
    
    return 0;
}
