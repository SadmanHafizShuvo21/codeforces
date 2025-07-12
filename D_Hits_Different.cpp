#include <iostream>
using namespace std;

long long sum_of_squares(long long n) {
    long long res = 0;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res += i * i;
            if (i != n / i) res += (n / i) * (n / i);
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << sum_of_squares(n) << "\n";
    }
    return 0;
}