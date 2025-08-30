#include <bits/stdc++.h>
using ll = long long;

std::vector<ll> Hamiltonian_path(ll n, std::vector<std::array<ll, 2>> &a) {
    ll x = 0; 
    std::vector<ll> p = {0};
    for (ll i = 1; i < n; i++) {
        auto [y, z] = a[x];
        if (a[y][0] == z || a[y][1] == z) {
            x = y;
        } else {
            x = z;
        }
        p.push_back(x);
    }
    return p;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::array<ll, 2>> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i][0] >> a[i][1];
        a[i][0]--; 
        a[i][1]--;
    }
    if (n == 3) {
        std::cout << "3 1 2" << "\n";
        return;
    }

    std::vector<ll> p = Hamiltonian_path(n, a);
    for (ll i = 0; i < n; i++) {
        std::cout << p[i] + 1 << " \n"[i == n - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
