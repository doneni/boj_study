#include <iostream>
#include <deque>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    string str; cin >> str;
    deque<char> left; deque<char> right;
    for(const auto& s : str)
        left.push_back(s);
    int M = 0; cin >> M;
    char cmd, c;
    while(M--)
    {
        cin >> cmd;
        switch(cmd)
        {
            case 'L':
                if(left.size())
                {
                    c = left.back();
                    left.pop_back();
                    right.push_front(c);
                }
                break;
            case 'D':
                if(right.size())
                {
                    c = right.front();
                    right.pop_front();
                    left.push_back(c);
                }
                break;
            case 'B':
                if(left.size())
                    left.pop_back();
                break;
            case 'P':
                cin >> c;
                left.push_back(c);
                break;
        }
    }
    for(const auto & c : left)
        cout << c;
    for(const auto & c : right)
        cout << c;
    cout << '\n';
    return 0;
}
