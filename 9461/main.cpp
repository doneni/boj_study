#include <iostream>
#define MAX 101
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0; 
    cin >> T;

    long long P[MAX] = { 0, };
    P[1] = 1;
    P[2] = 1;
    P[3] = 1;
    P[4] = 2;
    P[5] = 2;
    for(int i = 6; i < MAX; i++)
        P[i] = P[i - 1] + P[i - 5];

    int in = 0; 
    for(int i = 0; i < T; i++)
    {  
        cin >> in;
        cout << P[in] << '\n';
    }

    return 0;
}