#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        x %= 10;
        if (mp[x] < 3) {
            mp[x]++;
            a.push_back(x);
        }
    }

    n = a.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((a[i] + a[j] + a[k]) % 10 == 3) {
                    std::cout << "YES" << "\n";
                    return;
                }
            }
        }
    }
    
    std::cout << "NO" << "\n";
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
