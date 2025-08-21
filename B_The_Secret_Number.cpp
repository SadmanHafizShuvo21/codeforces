#include <bits/stdc++.h>
using ll = long long;
std::vector<ll> divs;

void precompute() {
    ll p = 10;
    for (int k = 1; k <= 18; k++) {
        divs.push_back(1 + p);
        p *= 10;
    }
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> ans;
    for (ll x : divs) {
        if (n % x == 0) {
            ans.push_back(n / x);
        }
    }

    if (ans.empty()) {
        std::cout << 0 << "\n";
        return;
    }
    
    std::sort(ans.begin(), ans.end());
    std::cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
    }
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
