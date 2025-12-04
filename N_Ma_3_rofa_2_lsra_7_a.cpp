#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<ll> vis(1e8 + 5, false);
void precompute() {
    for (int i = 1; i <= 1000; i++) {
        vis[i * i] = true;
    }
}

void solve() {
    ll n;
    std::cin >> n;

    for (int i = 1; i * i <= n; i++) {
        for (int j = i; i * i + j * j < n; j++) {
            ll rem = n - i * i - j * j;
            if (vis[rem] && rem > 0) {
                std::cout << "YES" << "\n";
                return;
            }
        }
    }
    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    solve();
}
