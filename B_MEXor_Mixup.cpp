#include <bits/stdc++.h>
using ll = long long;
const ll N = 300000;

std::vector<ll> pref(N, 0);
void precompute() {
    for (int i = 1; i < N; i++) {
        pref[i] = pref[i - 1] ^ (i - 1);
    }
}

void solve() {
    ll a, b;
    std::cin >> a >> b;

    ll ans = 0;
    b ^= pref[a];
    if (b == 0) {
        ans = a;
    }
    else if (b != a) {
        ans = a + 1;
    }
    else {
        ans = a + 2;
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

