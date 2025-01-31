#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, l, r;
    std::cin >> n >> l >> r;
    l--, r--;
    std::vector<ll> v(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<ll> a(v.begin() + l, v.begin() + r + 1);
    std::vector<ll> b;
    
    for (int i = 0; i < n; i++) {
        if (i < l || i > r) {
            b.push_back(v[i]);
        }
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    for (int i = 0; i < std::min(a.size(), b.size()); i++) {
        if (b[i] < a[a.size() - 1 - i]) {
            a[a.size() - 1 - i] = b[i];
        }
    }
    ll result = std::accumulate(a.begin(), a.end(), 0LL);
    std::cout << result << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
