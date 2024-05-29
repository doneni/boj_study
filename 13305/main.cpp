#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    vector<pair<long long,long long>> v(N-1);
    long long cost = 0, past = 0;
    for(int i = 0; i < N-1; i++)
        cin >> v[i].first;
    for(int i = 0; i < N-1; i++)
    {
        cin >> v[i].second;
        past = (i == 0) ? v[i].second : min(past, v[i].second);
        cost += v[i].first * past;
    }
    getchar();
    cout << cost << endl;
    return 0;
}

