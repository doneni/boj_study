#include <iostream>
using namespace std;

int main()
{
    int N, A, B; cin >> N >> A >> B;
    B = max(N, B);
    if(A == B)
        cout << "Anything";
    else
        cout << (A < B ? "Bus" : "Subway");
    return 0;
}
