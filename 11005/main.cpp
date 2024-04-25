#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    int b = 0; cin >> b;
    int num = N;
    deque<char> res;
    int m;
    while(num)
    {
        m = num % b;
        if(num % b < 10)
            res.push_front(m + '0');
        else
            res.push_front(m + 'A' - 10);
        num /= b;
    }
    for(const auto & r : res)
        cout << r;
    return 0;
}
