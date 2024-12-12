#include <iostream>
using namespace std;

int main()
{
    string L, R; cin >> L >> R;
    int cnt8 = 0;
    if(L.size() == R.size() && L[0] == R[0]) {   
        for(size_t i = 0; i < L.size(); i++) {
            if(L[i] != R[i]) {
                break;
            }
            if(L[i] == '8') {
                cnt8++;
            }
        }
    }
    cout << cnt8;
    
    return 0;
}
