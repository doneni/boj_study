#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> s;
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0, M = 0; cin >> N >> M;
    int ans = 0;
    for(int i = 0; i < N; i++)
    {
        string in; cin >> in;
        s.insert(in);
    }
    for(int i = 0; i < M; i++)
    {
        string test; cin >> test;
        if(s.find(test) != s.end())
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
