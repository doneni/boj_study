#include <iostream>
#include <vector>
using namespace std;

vector<int> pos;

void placeAt(int at, int val) {
    for(size_t i = 0; i < pos.size(); i++) {
        if(pos[i] == 0) {
            if(at-- == 0) {
                pos[i] = val;
                break;
            }
        }
    }
}

int main()
{
    int N; cin >> N;
    pos.assign(N, 0);
    
    int in;
    for(int i = 1; i <= N; i++) {
        cin >> in;
        placeAt(in, i);
    }
    for(int p : pos) {
        cout << p << ' ';
    }
    
    
    return 0;
}
