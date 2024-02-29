#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0, K = 0;
    cin >> N >> K;

    vector<int> v(N);
    for(int i = 1; i <= N; i++)
        v[i - 1] = i;

    int next = 0;
    cout << "<";
    while(!v.empty())
    {
        next += K - 1;
        while(next > v.size() - 1)
            next -= v.size();
        if(v.size() == 1)
            cout << v[next] << ">" << '\n';
        else
            cout << v[next] << ", ";
        v.erase(v.begin() + next);
    }

    return 0;
}