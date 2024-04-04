#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    string name;
    double n = 0;
    string s;
    
    double sum = 0, s_sum = 0;
    int line = 20;
    while(line--)
    {
        cin >> name >> n >> s;
        if(s[0] == 'P')
            continue;
        sum += n;
        switch(s[0]) 
        {
            case 'A': 
                s_sum += n * 4.0;
                break;
            case 'B' :
                s_sum += n * 3.0;
                break;
            case 'C' :
                s_sum += n * 2.0;
                break;
            case 'D' :
                s_sum += n * 1.0;
                break;
            case 'F' :
                continue;
        }
        if(s.size() == 2 && s[1] == '+')
            s_sum += n * 0.5;
    }
    double ans = s_sum / sum;
    cout << fixed;
    cout.precision(6);
    cout << ans << '\n';
    
    return 0;
}
