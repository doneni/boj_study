#include <iostream>
using namespace std;

int main(void)
{
    int N = 0; cin >> N;
    for(int i = 1; i < N; i++)
    {
        for(int j = N-i; j > 0; j--)
            cout << ' ';
        for(int j = 1; j <= 2*i-1; j++)
            cout << '*';
        cout << '\n';
    }
    for(int i = N; i > 0; i--)
    {
        for(int j = 0; j < N-i; j++)
            cout << ' ';
        for(int j = 2*i-1; j > 0; j--)
            cout << '*';
        cout << '\n';
    }
    return 0;
}