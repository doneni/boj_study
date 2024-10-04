#include <iostream>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    int past = 1e9, cur = 0;
    int received_gift = -1;
    while(N--)
    {
        cin >> cur;
        if(past - cur >= K)
            received_gift++;
        past = cur;
    }
    cout << received_gift;
    return 0;
}
