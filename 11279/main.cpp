#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    int input = 0;
    priority_queue<int> pq;
    while(N--)
    {
        cin >> input;
        if(!input)
        {
            if(pq.empty())
                cout << 0 << '\n';
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
            pq.push(input);
    }

    return 0;
}