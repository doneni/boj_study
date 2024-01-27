#include <iostream>
#define MAX 128
using namespace std;

bool paper[MAX][MAX] = { 0, };
int white = 0;
int blue = 0;

bool check(int x, int y, int s)
{
    for(int i = x; i < x + s; i++)
        for(int j = y; j < y + s; j++)
            if(paper[i][j] != paper[x][y])
                return false;

    return true;
}

void cut_paper(int x, int y, int s)
{
    if(s == 1 || check(x, y, s))
    {
        (paper[x][y] == 0) ? white++ : blue++;
        return;   
    }
    cut_paper(x, y, s / 2);
    cut_paper(x + s / 2, y, s / 2);
    cut_paper(x, y + s / 2, s / 2);
    cut_paper(x + s / 2, y + s / 2, s / 2);
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> paper[i][j];

    cut_paper(0, 0, n);

    cout << white << '\n';
    cout << blue << '\n';

    return 0;
}