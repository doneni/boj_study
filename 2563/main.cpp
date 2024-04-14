#include <iostream>
#define MAX 101
using namespace std;

int main(void)
{
    int n = 0; cin >> n;
    bool p[MAX][MAX] = { 0, };
    int x = 0, y = 0;
    int s = 0;
    while(n--)
    {
        cin >> x >> y;
        for(int i = x; i < x + 10; i++)
            for(int j = y; j < y + 10; j++)
            {
                if(!p[i][j])
                    s++;
                p[i][j] = true;
            }

    }
    cout << s << '\n';
    
    return 0;
}