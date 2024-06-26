#include <iostream>
#include <queue>
using namespace std;

struct cmp
{
    bool operator()(int& n1, int& n2)
    {
        if(abs(n1) == abs(n2))
            return (n1 > n2);
        else
            return (abs(n1) > abs(n2));
    }
};

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    int x;
    priority_queue<int, vector<int>, cmp> pq;
    while(N--)
    {
        cin >> x;
        if(x)
            pq.push(x);
        else if(pq.empty())
            cout << 0 << '\n';
        else
        {
            cout << pq.top() << '\n';
            pq.pop();
        }
    }

    return 0;
}
