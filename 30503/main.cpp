#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N; cin >> N;
    int A[N + 1] = { 0, };
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    int Q; cin >> Q;
    int q, l, r, k; 
    while(Q--)
    {
        cin >> q;
        if(q == 1)
        {
            cin >> l >> r >> k;
            int cnt = 0;
            for(int i = l; i <= r; i++)
                if(A[i] == k)   
                    cnt++;
            cout << cnt << '\n';
        }
        else
        {
            cin >> l >> r;
            for(int i = l; i <= r; i++)
                A[i] = 0;
        }
    }
    return 0;
}
