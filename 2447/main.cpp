#include <iostream>
using namespace std;

void print_star(int n, int x, int y) 
{
    if((x*3/n) % 3 == 1 && (y*3/n) % 3 == 1) {  cout << ' ';    }
    else if (n / 3 == 0)    {   cout << '*';    }
    else    {   print_star(n/3, x, y);  }
    return;
}

int main()
{
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            print_star(N, i, j);
        cout << '\n';
    }
    return 0;
}
