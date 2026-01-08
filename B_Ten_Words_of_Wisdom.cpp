#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    std::vector<std::pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i] >> b[i];
        if (a[i] <= 10) {
            pr.push_back({b[i], i + 1});
        }
    }
    std::sort(pr.rbegin(), pr.rend());
    std::cout << pr[0].second << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}