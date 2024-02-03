#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = N - i; j > 0; j--)
            cout << "*";
        cout << endl;
    }

    return 0;
}