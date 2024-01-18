#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int n = 0, tmp = 0;
    queue<int> q;
    cin >> n;
    
    for(int i = 1; i < n + 1; i++)
        q.push(i);
    
    while(q.size() > 1)
    {
        q.pop();
        tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    
    cout << q.front() << endl;
    
    return 0;
}

