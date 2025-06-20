#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    ll x;
    std::cin >> n >> x;
    std::vector<std::pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++) {
        ll val;
        std::cin >> val;
        a[i] = {val, i + 1}; 
    }

    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        ll tar = x - a[i].first;
        int l = i + 1, r = n - 1;
        while (l < r) {
            ll sum = a[l].first + a[r].first;
            if (sum == tar) {
                std::cout << a[i].second << ' ' << a[l].second << ' ' << a[r].second << '\n';
                return;
            } 
            else if (sum < tar) {
                l++;
            } 
            else {
                r--;
            }
        }
    }

    std::cout << "IMPOSSIBLE" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
