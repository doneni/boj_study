#include <iostream>
#define X 500
#define Y 500
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, m = 0, b = 0;
    int t_1 = 0, t_2 = 0, ans_h = 0;
    int max_h = 0, min_h = 256;
    int min_t = -1;
    int block[X][Y] = { 0, };
    cin >> n >> m >> b;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {            
            cin >> block[i][j];
            if(block[i][j] > max_h)
                max_h = block[i][j];
            if(block[i][j] < min_h)
                min_h = block[i][j];
        }
    
    int need = 0, t = 0, b_tmp;
    for(int h = max_h; h >= min_h; h--)
    {
        b_tmp = b;
        t_1 = 0;
        t_2 = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                if(h - block[i][j] > 0)
                    t_2 += h - block[i][j];
                else
                    t_1 += block[i][j] - h;
                b_tmp += block[i][j] - h;
            }

        if(b_tmp < 0)
            continue;
        t = t_1 * 2 + t_2 * 1;
        if(t < min_t || min_t == -1)
        {
            min_t = t;
            ans_h = h;
        }
    }

    cout << min_t << " " << ans_h << '\n';

    return 0;
}