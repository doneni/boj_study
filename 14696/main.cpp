#include <iostream>
using namespace std;

// 별4 동그라미3 네모2 세모1
int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    int a = 0, b = 0;
    int n = 0;
    while(N--)
    {
        cin >> a;
        int A[5] = { 0, };
        while(a--)
        {
            cin >> n;
            A[n]++;
        }
        cin >> b;
        int B[5] = { 0, };
        while(b--)
        {
            cin >> n;
            B[n]++;
        }
        if(A[4] != B[4])
            cout << (A[4] > B[4] ? 'A' : 'B') << '\n';
        else if(A[3] != B[3])
            cout << (A[3] > B[3] ? 'A' : 'B') << '\n';
        else if(A[2] != B[2])
            cout << (A[2] > B[2] ? 'A' : 'B') << '\n';
        else if(A[1] != B[1])
            cout << (A[1] > B[1] ? 'A' : 'B') << '\n';
        else
            cout << 'D' << '\n';
    }
    return 0;
}
