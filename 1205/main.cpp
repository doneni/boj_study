#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, T, P; cin >> N >> T >> P;
    vector<int> rank(N);
    
    int s;
    for(int i = 0; i < N; i++) {
        cin >> rank[i];
    }
    
    if(rank.size() == P && rank.back() >= T) {
        cout << -1;
    }
    else if(rank.empty()) {
        cout << 1;
    }
    else if(rank.size() < P && rank.back() > T) {
        cout << rank.size()+1;
    }
    else {
        for(size_t i = 0; i < rank.size(); i++) {
            if(rank[i] <= T)  {   
                cout << i+1;
                break;
            }
        }
    }
    return 0;
}