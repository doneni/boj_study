#include <iostream>
using namespace std;

int main()
{
    int N = 0, K = 0; cin >> N >> K;
    int i = 1;
    for(i = 1; i <= N; i++)
        if(N % i == 0 && !(--K))
            break;
    cout << ((i > N) ? 0 : i) << '\n';
    return 0;
}
