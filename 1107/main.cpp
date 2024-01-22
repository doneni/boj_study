#include <iostream>
#include <algorithm>
#include <deque>
#include <unordered_set>
#include <cstdlib>
using namespace std;

deque<char> digit(int num)
{
    deque<char> d;
    if(num == 0)
        d.push_front('0');
    while(num > 0)
    {
        d.push_front(to_string(num % 10)[0]);
        num /= 10;
    }
    return d;
}

bool hasIntersection(deque<char>& d1, deque<char>& d2)
{
    unordered_set<char> us;
    for(char d : d1)
        us.insert(d);

    for(char d : d2)
    {
        if(us.find(d) != us.end())
            return true;
    }
    return false;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    cin >> N >> M;

    int input = 0;
    deque<char> channel = digit(N);
    deque<char> broken_btn;

    for(int i = 0; i < M; i++)
    {
        cin >> input;
        broken_btn.push_back(to_string(input)[0]);
    }

    // use +, - only
    int min = abs(N - 100);

    // try to use numpad only
    if(!hasIntersection(channel, broken_btn))
        min = (channel.size() < min) ? channel.size() : min;
    else
    {
        // go down to use numpad and +, -
        int current = N - 1;
        while(current >= 0)
        {
            deque<char> current_channel = digit(current);
            if(current_channel.size() + abs(current - N) > min)
                break;
            if(!hasIntersection(current_channel, broken_btn))
            {
                min = current_channel.size() + abs(current - N);
                break;
            }
            current--;
        }
        current = N + 1;
        while(1)
        {
            deque<char> current_channel = digit(current);
            if(current_channel.size() + abs(current - N) > min)
                break;
            if(!hasIntersection(current_channel, broken_btn))
            {
                min = current_channel.size() + abs(current - N);
                break;
            }
            current ++;
        }
    }
    cout << min << '\n';

    return 0;
}