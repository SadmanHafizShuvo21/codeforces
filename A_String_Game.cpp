#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, t;
    std::cin >> s >> t;
    ll n = s.size(), m = t.size();

    std::vector<ll> a(n);
    std::vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
        v[a[i]] = i; 
    }
    
    ll l = 0, r = n;
    while (l < r) {
        ll mid = (l + r + 1) / 2;
        ll j = 0;
        for (ll i = 0; i < n && j < m; i++) {
            if (v[i] >= mid && s[i] == t[j]) {
                j++;
            }
        }
        if (j == m) {
            l = mid;
        } 
        else {
            r = mid - 1;
        }
    }
    std::cout << l << '\n'; 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}