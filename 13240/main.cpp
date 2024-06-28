#include <iostream>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        string s = (i % 2 == 0 ? "*" : ".");
        for(int j = 1; j < M; j++)
            s += (s.back() == '*' ? '.' : '*');
        cout << s << '\n';
    }
    return 0;
}
