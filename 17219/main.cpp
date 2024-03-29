#include <iostream>
#include <unordered_map>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    cin >> N >> M;
    unordered_map<string,string> um;
    
    string domain, pass;
    for(int i = 0; i < N; i++)
    {
        cin >> domain >> pass;
        um.insert({domain, pass});
    }
    for(int i = 0; i < M; i++)
    {
        cin >> domain;
        cout << um[domain] << '\n';
    }

    return 0;
}