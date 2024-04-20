#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string name;
    int lang;
    int eng;
    int math;
};

bool cmp(const Student &s1, const Student &s2)
{
    if(s1.lang == s2.lang)
    {
        if(s1.eng == s2.eng)
        {
            if(s1.math == s2.math)
                return s1.name < s2.name;
            else
                return s1.math > s2.math;
        }
        else
            return s1.eng < s2.eng;
    }
    else
        return s1.lang > s2.lang;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    int N = 0;
    vector<Student> s;
    string n;
    int l, e, m;
    cin >> N;
    while(N--)
    {
        cin >> n >> l >> e >> m;
        s.push_back({n, l, e, m});
    }
    sort(s.begin(), s.end(), cmp);
    for (const auto& e : s)
        cout << e.name << '\n';
    
    return 0;
}
