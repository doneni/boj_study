#include <iostream>
using namespace std;

int main()
{
    int T = 0; cin >> T;
    int click[3] = { 0, };
    int button[3] = { 300, 60, 10 };
    for(int i = 0; i < 3; i++) {
        if(button[i] > T)   { continue; }
        click[i] = T / button[i];
        T = T % button[i];
    }
    if(T) {
        cout << -1;
    } else {
        for(int i = 0; i < 3; i++) {
            cout << click[i] << ' ';
        }
    }
    
    return 0;
}
