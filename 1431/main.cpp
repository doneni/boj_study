#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string &s1, string &s2)
{
    if(s1.size() == s2.size())
    {
        int sum1 = 0, sum2 = 0;
        for(const auto& e : s1)
            if('0' <= e && e <= '9')
                sum1 += e - '0';
        for(const auto& e : s2)
            if('0' <= e && e <= '9')
                sum2 += e - '0';
    
        if(sum1 == sum2)
            return s1 < s2;
        else
            return sum1 < sum2;
    }
    else
        return s1.size() < s2.size();
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    vector<string> v(N);
    for(int i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), cmp);
    for(const auto& e : v)
        cout << e << '\n';
    return 0;
}
