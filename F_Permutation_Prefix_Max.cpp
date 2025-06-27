#include <bits/stdc++.h>
using ll = long long;

const ll MOD = 1e9 + 7;
const ll MAXN = 1e5 + 5;
ll f[MAXN];

void precompute() {
    f[1] = 1;
    f[2] = 2; // Base case for n=2, as there is only one valid permutation [1, 2]
    for (int i = 3; i < MAXN; i++) {
        f[i] = f[i - 1] * (2 * i - 3) % MOD;
    }
}

void solve() {
    ll n;
    std::cin >> n;
    std::cout << f[n] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
