#include <iostream>
using namespace std;

int main()
{
    int r, c, zr, zc; cin >> r >> c >> zr >> zc;
    char a[r][c] = { 0, };
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];
    for(int i = 0; i < r; i++)
        for(int x = 0; x < zr; x++)
        {
            for(int j = 0; j < c; j++)
                for(int y = 0; y < zc; y++)
                    cout << a[i][j];
            cout << '\n';
        }
    return 0;
}
