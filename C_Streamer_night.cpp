#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<std::pair<ll, ll>> pr(k);
    for (int i = 0; i < k; i++) {
        int a, b;
        std::cin >> a >> b;
        pr[i] = {b, a}; 
    }

    std::sort(pr.begin(), pr.end());

    ll cnt = 0, last = 0;
    for (auto [st, end] : pr) {
        if (end >= last) {
            last = st;
            cnt++;
        }
    }

    std::cout << cnt << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
