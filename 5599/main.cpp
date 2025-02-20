#include <iostream>
#include <stack>
#include <deque>
using namespace std;

deque<int> cards;

void cut(int k) {
    for(int i = 0; i < k; i++) {
        int t = cards.front();
        cards.push_back(t);
        cards.pop_front();
    }
}

void riffle(int n) {
    stack<int> t;
    for(int i = 0; i < n; i++) {
        t.push(cards.back());
        cards.pop_back();
    }
    for(int i = 0; i < n; i++) {
        cards.insert(cards.begin() + 2*i+1, t.top());
        t.pop();
    }
    return;
}

int main()
{
    int n, m; cin >> n >> m;
    for(int i = 1; i <= 2*n; i++) {
        cards.push_back(i);
    }
    while(m--) {
        int k; cin >> k;
        if(k) {
            cut(k);
        } else {
            riffle(n);
        }
    }
    for(int c : cards) {
        cout << c << '\n';
    }
    return 0;
}
