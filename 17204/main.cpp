#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N, K; cin >> N >> K;
    int M = 0;
    int a[N] = { 0, };
    bool visited[N] = { 0, };
    for(int i = 0; i < N; i++)
        cin >> a[i];
    int idx = a[0];
    while(visited[idx] != true)
    {
        M++;
        visited[idx] = true;
        if(idx == K)
            break;
        idx = a[idx];
    }
    cout << (idx == K ? M : -1) << '\n'; 
    return 0;
}
