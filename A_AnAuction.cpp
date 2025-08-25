#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> bids(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> bids[i].first;
        bids[i].second = i + 1;
    }

    std::sort(bids.begin(), bids.end());
    std::cout <<bids[n - 1].second <<" " <<bids[n - 2].first << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
