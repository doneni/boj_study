#include <iostream>
#include <unordered_set>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    unordered_set<int> s;
    int n = 0, m = 0;
    cin >> N;
    while(N--)
    {
        cin >> n;
        s.insert(n);
    }
    cin >> M;
    while(M--)
    {
        cin >> m;
        cout << (s.find(m) != s.end() ? 1 : 0) << ' ';
    }
    
    return 0;
}