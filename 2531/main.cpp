#include <iostream>
#include <vector>
using namespace std;

int countKind(vector<bool>& kind, int c) {
    int sumKind = 0;
    for(bool k : kind) {
        if(k)   { sumKind++; }
    }
    if(kind[c] == false) {
        sumKind++;
    }
    return sumKind;
}

int main()
{
    int N, d, k, c; cin >> N >> d >> k >> c;
    vector<int> s(N);
    for(int i = 0; i < N; i++) {
        cin >> s[i];
    }
    
    int maxKind = 0;
    for(int i = 0; i < N; i++) {
        int idx = i;
        vector<bool> kind(d+1);
        for(int j = i; j < i + k; j++) {
            idx = (j < N ? j : j-N);
            kind[s[idx]] = true;
        }
        maxKind = max(maxKind, countKind(kind, c));
        if(maxKind == k+1)  { break; }
    }
    cout << maxKind;
    
    return 0;
}