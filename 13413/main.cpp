#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        int len; cin >> len;
        string src, dst; cin >> src >> dst;
        int w_cnt = 0, b_cnt = 0;
        for(int i = 0; i < len; i++)
        {
            if(src[i] != dst[i])
                src[i] == 'W' ? w_cnt++ : b_cnt++;   
        }
        cout << w_cnt + b_cnt - min(w_cnt, b_cnt) << '\n';
    }
    return 0;
}
