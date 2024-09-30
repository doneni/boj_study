#include <iostream>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    int a[N][N] = { 0, };
    for(int x = 0; x < N; x++)
        for(int y = 0; y < N; y++)
            cin >> a[x][y];
    for(int x = 0; x < N; x++)
        for(int i = 0; i < K; i++)
            for(int y = 0; y < N; y++)
                for(int j = 0; j < K; j++)
                    cout << a[x][y] << (y == N-1 && j == K-1 ? '\n' : ' ');
    return 0;
}
