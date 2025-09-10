#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    std::map<ll, ll> mp;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }
    
    ll x = 0;
    for (auto m : mp) {
        if (m.second == 1) {
            x = m.first;
        }
    }

     auto it = std::find(a.begin(), a.end(), x);
     ll idx = it - a.begin() + 1;
    std::cout << idx << "\n";
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
