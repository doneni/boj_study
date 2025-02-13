#include <iostream>
#include <vector>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
#define MAX 1000000
using namespace std;

vector<bool> isPrime;
vector<int> primes;

void findPrime() {
    isPrime.resize(MAX + 1, true);
    isPrime[0] = false; isPrime[1] = false;
    for(int i = 2; i <= MAX; i++) {
        if(isPrime[i] == false) { continue; }
        primes.push_back(i);
        for(int j = i * 2; j <= MAX; j += i) {
            isPrime[j] = false;
        }
    }
    return;
}

int main()
{
    FASTIO;
    findPrime();
    while(true) {
        int n; cin >> n;
        if(n == 0) { break; }
        for(int a : primes) {
            if(a > n / 2) { 
                cout << "Goldbach's conjecture is wrong.\n";
                break; 
            }
            int b = n - a;
            if(isPrime[b]) {
                cout << n << " = " << a << " + " << b << '\n';
                break;
            }
        }
    }
    return 0;
}
