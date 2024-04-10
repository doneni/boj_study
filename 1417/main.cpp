#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    int vote1 = 0;
    cin >> vote1;
    int need = vote1;
    priority_queue<int> p;
    int vote = 0;
    for(int i = 2; i <= N; i++)
    {
        cin >> vote;
        p.push(vote);
    }

    while(!p.empty() && p.top() >= need)
    {
        p.push(p.top() - 1);
        need++;
        p.pop();
    }
    cout << need - vote1 << '\n';

    return 0;
}