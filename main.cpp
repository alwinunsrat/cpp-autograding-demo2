#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    if (cin >> n) {
        if (isPrime(n)) {
            cout << "PRIMA" << endl;
        } else {
            cout << "BUKAN PRIMA" << endl;
        }
    }
    return 0;
}
