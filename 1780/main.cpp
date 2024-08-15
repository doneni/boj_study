#include <iostream>
#define MAX 2187
using namespace std;

int N = 0;
int p[MAX][MAX] = { 0, };
int ans[3] = { 0, };

int check(int x, int y, int k)
{
    int a = p[x][y];
    for(int i = x; i < x + k; i++)
        for(int j = y; j < y + k; j++)
            if(p[i][j] != a)
                return 2;
    return a;
}

void dc(int x, int y, int k)
{
    int a = check(x, y, k);
    if(a != 2)
        ans[a + 1]++;
    else
    {
        k /= 3;
        for(int i = x; i < x + 3 * k; i += k)
            for(int j = y; j < y + 3 * k; j += k)
                dc(i, j, k);
    }
    return;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> p[i][j];
    dc(0, 0, N);
    for(int i = 0; i < 3; i++)
        cout << ans[i] << '\n';
    return 0;
}
