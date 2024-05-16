#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    int r[MAX] = { 0, };
    for(int i = 0; i < N; i++)
        cin >> r[i];
    sort(r, r + N);
    for(int i = 0; i < N; i++)
        r[i] *= N - i;
    sort(r, r + N);
    cout << r[N-1] << endl;
    return 0;
}
