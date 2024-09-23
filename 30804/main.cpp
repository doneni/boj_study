#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N; cin >> N;
    int a[N] = { 0, };
    for(int i = 0; i < N; i++)
        cin >> a[i];
    
    // two pointers
    int M_len = 1;
    int kind = 0;
    int cnt[N+1] = { 0, };
    int h = 0, t = 0;
    while(h <= t)
    {
        if(!cnt[a[t]])
            kind++;
        cnt[a[t]]++;
        while(kind > 2)
            if(--cnt[a[h++]] == 0)
                kind--;
        M_len = max(M_len, t-h+1);
        if(t++ == N-1)
            break;
    }
    cout << M_len;
}
