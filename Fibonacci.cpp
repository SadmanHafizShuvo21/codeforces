#include<bits/stdc++.h>
using ll = long long;
using ld = long double;
const ll N = 1e5;

// Recursive Fibonacci with custom first two terms
ll fibonacci(ll a, ll b, ll n) { // Time complexity 0(2^n)
    if (n == 0) return a;
    if (n == 1) return b;
    return fibonacci(a, b, n - 1) + fibonacci(a, b, n - 2);
}

// Binet's formula for standard Fibonacci sequence
int Binetsformula(int n) { // log(n)
    double sq = sqrt(5);
    double phi = (1 + sq) / 2;
    double psi = (1 - sq) / 2;

    return round((pow(phi, n) - pow(psi, n)) / sq);
}

void solve () {
    ll n;
    std::cin >> n;
    n--;
    ll res1 = fibonacci(0, 1, n);// Recursive result
    ll res2 = Binetsformula(n);// Binet's formula result
    
    for(int i = 0; i <= n; i++) {
        std::cout << Binetsformula(i) << " \n"[i == n];
    }
    ll sum = Binetsformula(n + 2) - 1;// Sum of first n Fibonacci numbers
    std::cout << res1 << "\n";
    std::cout << res2 << "\n";
    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}