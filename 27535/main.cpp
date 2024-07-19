#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(pair<char,int> &p1, pair<char,int> &p2)
{
    return p1.second > p2.second;
}

// N진법
string num(int n, int b)
{
    if(b == 0 || b == 1)
        return to_string(n);
    string s = "";
    int m;
    while(n)
    {
        s.insert(s.begin(), n % b + '0');
        n /= b;
    }
    return s;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    char kind[5] = { 'H', 'T', 'C', 'K', 'G' };
    map<char, int> c;
    int total = 0, base = 0;
    for(const auto& e : kind)
    {
        cin >> c[e];
        total += c[e];
    }
    int M; cin >> M;
    int in;
    while(M--)
    {
        base = total % 10;
        for(const auto& e : kind)
        {
            cin >> in;
            c[e] -= in;
            total -= in;
        }
        if(total)
        {
            cout << num(total, base) << "7H\n";      
            vector<pair<char,int>> v(c.begin(), c.end());
            sort(v.begin(), v.end(), cmp);
            for(auto const& e : v)
                if(e.second)
                    cout << e.first;
            cout << '\n';
        }
        else
            cout << "07H\nNULL\n";
    }
    return 0;
}
