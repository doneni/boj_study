#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    int cuteness = 0;
    for(int i = 0; i < N; i++) {
        int c; cin >> c;
        if(c == 1) { cuteness++; }
    }
    cout << (cuteness > N-cuteness ? "Junhee is cute!" : "Junhee is not cute!");
    
    return 0;
}
