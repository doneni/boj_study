#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 64
using namespace std;

int N = 0;
char a[MAX][MAX] = { 0, };
string quad_tree = "";
int dx[4] = {0, 0, 1, 1};
int dy[4] = {0, 1, 0, 1};

bool check(int x, int y, int k) {
    char c = a[x][y];
    for(int i = x; i < x + k; i++)
        for(int j = y; j < y + k; j++)
            if(c != a[i][j]) 
                return false;
    return true;
}

void devide_n_conquer(int x, int y, int k) {
    if(!check(x, y, k)) {
        quad_tree += '(';
        int nk = k / 2;
        for(int i = 0; i < 4; i++)
            devide_n_conquer(x + nk * dx[i], y + nk * dy[i], nk);
        quad_tree += ')';   
    }
    else
        quad_tree += a[x][y];
}

int main()
{
    FASTIO;
    cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> a[i][j];
    devide_n_conquer(0, 0, N);
    cout << quad_tree;
    return 0;
}
