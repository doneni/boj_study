#include <iostream>
using namespace std;

char c[3][4] = {
    { 'G', '.', '.', '.'},
    { '.', 'I', '.', 'T'},
    { '.', '.', 'S', '.'},
};

int main(void)
{
    int n; cin >> n;
    for(int ly = 0; ly < 3; ly++)
    {
        for(int sy = 0; sy < n; sy++)
        {
            for(int lx = 0; lx < 4; lx++)
            {
                for(int sx = 0; sx < n; sx++)
                {
                    cout << c[ly][lx];
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
