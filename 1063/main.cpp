#include <iostream>
using namespace std;



int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int k_x = 0, k_y = 0, s_x = 0, s_y = 0;
    string str;
    int N = 0;
    cin >> str;
    k_x = str[0] - 'A';
    k_y = str[1] - '1';
    cin >> str;
    s_x = str[0] - 'A';
    s_y = str[1] - '1';
    cin >> N;

    for(int n = 0; n < N; n++)
    {
        cin >> str;
        int next_k_x = k_x, next_k_y = k_y;
        int next_s_x = s_x, next_s_y = s_y;
        for(size_t i = 0; i < str.size(); i++)
        {
            switch(str[i]) {
                case 'R':
                    next_k_x++;
                    continue;
                case 'L':
                    next_k_x--;
                    continue;
                case 'B':
                    next_k_y--;
                    continue;
                case 'T':
                    next_k_y++;
                    continue;
            }
        }
        if(next_k_x == next_s_x && next_k_y == next_s_y)
        {
            for(size_t i = 0; i < str.size(); i++)
            {
                switch(str[i]) {
                    case 'R':
                        next_s_x++;
                        continue;
                    case 'L':
                        next_s_x--;
                        continue;
                    case 'B':
                        next_s_y--;
                        continue;
                    case 'T':
                        next_s_y++;
                        continue;
                }
            }
        }
        if(0 <= next_k_x && next_k_x < 8 && 0 <= next_k_y && next_k_y < 8 && 0 <= next_s_x && next_s_x < 8 && 0 <= next_s_y && next_s_y < 8)
        {
            k_x = next_k_x;
            k_y = next_k_y;
            s_x = next_s_x;
            s_y = next_s_y;
        }
    }
    cout << (char)(k_x + 'A') << (char)(k_y + '1') << '\n'; 
    cout << (char)(s_x + 'A') << (char)(s_y + '1') << '\n'; 
    return 0;
}