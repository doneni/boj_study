#include <iostream>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    for(int i = 2; i <= N; i++)
    {
        while(N % i == 0)
        {
            cout << i << endl;
            N /= i;
        }
    }
    return 0;
}
