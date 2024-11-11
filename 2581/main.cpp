#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    vector<bool> is_prime(M+1, true);
    vector<int> v;
    is_prime[1] = false;
    for(int i = 2; i <= M; i++) {
        if(!is_prime[i])    {   continue;   }
        for(int j = i*2; j <= M; j += i)    {   is_prime[j] = false;}
        if(i >= N)  {   v.push_back(i); }
    }
    if(v.size()) {
        int sum = 0;
        for(const int e : v)    {   sum += e;   }
        cout << sum << '\n' << v[0];
    }
    else {
        cout << -1;
    }
    return 0;
}
