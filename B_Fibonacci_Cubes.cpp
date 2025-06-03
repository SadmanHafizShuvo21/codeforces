#include <bits/stdc++.h>
using ll = long long;
std::vector<ll> fib(12);
void fibo () {
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i <= 10; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

void solve() {
    ll n, m;
    std::cin >> n >> m;

    std::string s;
    while (m--) {
        ll a[3];
        std::cin >> a[0] >> a[1] >> a[2];
        std::sort(a, a+3);
        s += (a[0] >= fib[n - 1] && a[1] >= fib[n - 1] && a[2] >= fib[n - 1] + fib[n - 2] ? '1' : '0');
    }
    std::cout << s << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    fibo();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}