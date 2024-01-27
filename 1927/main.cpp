#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    int in = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        if(in)
        {
            pq.push(in);
        }
        else
        {
            if(pq.empty())
            {
                cout << 0 << '\n';
                continue;
            }
            cout << pq.top() << '\n';
            pq.pop();
        }
    }

    return 0;
}