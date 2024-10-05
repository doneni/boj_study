#include <iostream>
#include <vector>
using namespace std;

struct Answer {
    string subject;
    string fruit;
    string color;
} ans;

int main()
{
    int N, M; cin >> N >> M;
    vector<Answer> v;
    while(N--)
    {
        cin >> ans.subject >> ans.fruit >> ans.color;
        v.push_back(ans);
    }
    while(M--)
    {
        int cnt = 0;
        cin >> ans.subject >> ans.fruit >> ans.color;
        for(const auto & e : v)
        {
            if((ans.subject == "-" || e.subject == ans.subject) && (ans.fruit == "-" || e.fruit == ans.fruit) && (ans.color == "-" || e.color == ans.color))
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
