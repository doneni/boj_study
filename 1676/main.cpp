#include <iostream>
using namespace std;

int foo(int target, int divider)
{
    int rslt = 0;
    while(1)
    {
        if(target % divider == 0 && target != 0)
        {
            target /= divider;
            rslt++;
        }
        else
            break;
    }
    return rslt;    
}

int main(void)
{
    int n = 0;
    int cnt_2 = 0, cnt_5 = 0;
    cin >> n;
    for(int i = 1; i < n + 1; i++)
    {
        cnt_2 += foo(i, 2);
        cnt_5 += foo(i, 5);
    }

    cout << ((cnt_2 > cnt_5) ? cnt_5 : cnt_2) << endl;

    return 0;
}