#include <iostream>
#include <vector>
using namespace std;

struct record{
    int i;
    int g;
    int s;
    int b;
} r;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N, K; cin >> N >> K;
    vector<record> v;
    int rank = 1;
    record k;
    while(N--)
    {
        cin >> r.i >> r.g >> r.s >> r.b;
        v.push_back(r);
        if(r.i == K)
            k = r;
    }
    for(const auto & e : v)
    {
        if(e.i == k.i)
            continue;
        if(e.g > k.g)
            rank++; 
        else if(e.g == k.g && e.s > k.s)
            rank++;
        else if(e.g == k.g && e.s == k.s && e.b > k.b)
            rank++;
    }
    cout << rank;
    return 0;
}
