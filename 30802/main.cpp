#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long N; cin >> N;
    long long T_sum = 0;
    int order[6] = { 0, };
    for(int i = 0; i < 6; i++) {
        cin >> order[i];
    }
    long long T = 0, P = 0; cin >> T >> P;
    for(int i = 0; i < 6; i++) {
        T_sum += ceil(1.0 * order[i] / T);
    }
    cout << T_sum << '\n' << N / P << ' ' << N % P;
    return 0;
}
