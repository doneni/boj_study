#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int &n1, int &n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T = 0; cin >> T;
    string p;
    int n = 0;
    char c;
    while(T--)
    {
        cin >> p >> n;
        vector<int> v(n);
        cin >> c;
        for(int i = 0; i < n; i++)
            cin >> v[i] >> c;
        int head = 0, tail = n - 1;
        if(n == 0)
            cin >> c;
        bool error = false;
        for(const auto& c : p)
        {
            switch(c)
            {
                case 'R':
                    swap(head, tail);
                    break;
                case 'D':
                    if(head < 0 || tail < 0)
                        error = true;
                    if(head == tail)
                    {
                        head = -1;
                        tail = -1;
                    }
                    else if(head > tail)
                        head--;
                    else
                        head++;
                    break;
            }
        }
        if(error)
        {
            cout << "error" << '\n';
            continue;
        }
        if(head == -1 || tail == -1)
        {
            cout << "[]\n";
            continue;
        }
        cout << '[';
        for(int i = head; (head > tail) ? (i >= tail) : (i <= tail); (head > tail) ? i-- : i++)
            cout << v[i] << ((i != tail) ? "," : "]\n");
    }
    return 0;
}
