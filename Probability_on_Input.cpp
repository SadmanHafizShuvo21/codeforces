#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<ll> ans;
    std::vector<bool> s(k + 1, false);
    ll cnt = 0;                        
    ll g = 1;                        

    for (int i = 0; i < n; i++) {
        ans.push_back(g);

        if (!s[a[i]]) {
            s[a[i]] = true;
            cnt++;
        }

        if (cnt == k) { 
            std::fill(s.begin(), s.end(), false);
            cnt = 0;
            g = 1;
        } 
        else {
            while (g <= k && s[g]) {
                g++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
    }
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
