#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    int a = 0, b = 0;
    char ch;
    for(int i = 0; i < N; i++) {
        cin >> ch;
        (ch == 'A' ? a++ : b++);
    }
    if(a == b) {
        cout << "Tie";
    } else {
        cout << (a > b ? "A" : "B");
    }
}
