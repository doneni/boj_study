#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string f;
    cin >> f;

    int p = 0, n = 0;
    bool n_flag = false;

    string tmp_str;
    int tmp_num = 0;
    for(int i = 0; i < f.size(); i++)
    {
        if('0' <= f[i] && f[i] <= '9')
        {
            tmp_str += f[i];
            continue;
        }
        else
        {
            tmp_num = stoi(tmp_str);
            tmp_str = "";
            if(n_flag)
                n += tmp_num;
            else
                p += tmp_num;
            tmp_num = 0;
        }

        if(f[i] == '-')
            n_flag = true;

    }

    tmp_num = stoi(tmp_str);
    tmp_str = "";
    if(n_flag)
        n += tmp_num;
    else
        p += tmp_num;

    cout << p - n << endl;

    return 0;
}