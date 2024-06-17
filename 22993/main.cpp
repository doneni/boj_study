#include <iostream>
#include <queue>
#define ll long long
using namespace std;

int main()
{
    int N = 0; cin >> N;
    ll a = 0; cin >> a;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    ll n;
    for(int i = 0; i < N-1; i++)
    {
        cin >> n;
        q.push(n);
    }
    while(!q.empty())
    {
        if(q.top() >= a)
            break;
        a += q.top();
        q.pop();
    }
    cout << (q.empty() ? "Yes" : "No") << '\n';
    return 0;
}
