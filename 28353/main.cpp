#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N, K; cin >> N >> K;
    deque<int> w(N);
    for(int i = 0; i < N; i++)
        cin >> w[i];
    sort(w.begin(), w.end(), greater<int>());
    int happy = 0;
    while(!w.empty())
    {
        if(w.size() == 1)
            break;
        if(w.front() + w.back() <= K)
        {
            w.pop_back();
            happy++;
        }
        w.pop_front();
    }
    cout << happy << '\n';
    return 0;
}
