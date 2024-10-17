#include <iostream>
#include <vector>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 50
using namespace std;

int N = 0, M = 0; 
int reverse_called = 0;
bool before[MAX][MAX] = { 0, };
bool after[MAX][MAX] = { 0, };

void reverse(int x, int y) {
    reverse_called++;
    for(int i = x; i < x + 3; i++)
        for(int j = y; j < y + 3; j++)
            before[i][j] = !before[i][j];
    return;
}

int main()
{
    FASTIO;
    cin >> N >> M;
    char ch;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++) {
            cin >> ch;
            before[i][j] = (ch == '1' ? true : false);
        }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++) {
            cin >> ch;
            after[i][j] = (ch == '1' ? true : false);
        }
    for(int i = 0; i < N-2; i++) {
        for(int j = 0; j < M-2; j++) {
            if(before[i][j] != after[i][j])
                reverse(i, j);
        }
    }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            if(before[i][j] != after[i][j])
                reverse_called = -1;
    cout << reverse_called;
    return 0;
}
