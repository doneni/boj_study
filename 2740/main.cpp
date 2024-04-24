#include <iostream>
#define MAX 101
using namespace std;

int main()
{
    int N, M, K;
    int in;
    int A[MAX][MAX] = { 0, };
    int B[MAX][MAX] = { 0, };
    int C[MAX][MAX] = { 0, };
    cin >> N >> M;
    for(int i = 0; i< N; i++)
        for(int j = 0 ; j < M; j++)
            cin >> A[i][j];
    cin >> M >> K;
    for(int i = 0; i < M; i++)
        for(int j = 0; j < K; j++)
            cin >> B[i][j];
            
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            for(int k = 0; k < K; k++)
            {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
            
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < K; j++)
            cout << C[i][j] << ' ';
        cout << '\n';
    }
    
    return 0;
}
