#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n, k, q;
    std::cin >> n >> k >> q;

    std::vector<ll> freq(N, 0);
    for (int i = 0; i < n; i++) {
        ll l, r;
        std::cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    std::vector<ll> sum(N, 0);
    for (int i = 1; i < N; i++) {
        freq[i] += freq[i - 1];
        sum[i] = sum[i - 1] + (freq[i] >= k ? 1 : 0);
    }

    while (q--) {
        ll a, b;
        std::cin >> a >> b;
        std::cout << sum[b] - sum[a - 1] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}