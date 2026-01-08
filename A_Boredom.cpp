#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 1e5 + 10;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> freq(N, 0);

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        freq[x]++;
    }

    std::vector<ll> dp(N, 0);
    dp[1] = freq[1];
    for (int i = 2; i < N; i++) {
        dp[i] = std::max(dp[i - 1], dp[i - 2] + freq[i] * i);
    }

    std::cout << dp[N - 1] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
