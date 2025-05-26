#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    ll z = 0, o = 0;
    for (char c : s) {
        if (c == '0') {
            z++;
        }
        else {
            o++;
        }
    }
    
    ll m = n / 2;
    if (m - k > std::min(z, o)) {
        std::cout << "NO\n";
        return;
    }

    ll max_good = (z / 2) + (o / 2);
    if (k > max_good) {
        std::cout << "NO" << "\n";
        return;
    }

    double lb = std::max(0.0, (m + k - o) / 2.0);
    double ub = std::min((double)k, (z - m + k) / 2.0);
    
    std::cout << (ceil(lb) <= std::floor(ub) ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}