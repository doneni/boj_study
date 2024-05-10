#include <iostream>
using namespace std;

int main()
{
    long long N = 0; cin >> N;
    long long sum = 0;
    int cnt = 0, n = 1;
    while(true)
    {
        sum += n++;
        cnt++;
        if(sum > N)
            break;
    }
    cout << --cnt << '\n';
    return 0;
}
