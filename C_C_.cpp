#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> pref(n + 1, 0);
    std::partial_sum(a.begin(), a.end(), pref.begin() + 1);

    std::vector<ll> suf(n + 2, inf), pre(n + 1, inf);
    for(int i = n; i >= 0; i--) {
        suf[i] = std::min(pref[i], suf[i + 1]);
    }
    
    for(int i = 0; i <= n; i++) {
        pre[i] = (i ? std::min(pre[i - 1], pref[i]) : pref[0]);
    }

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(suf[i + 1] >= pref[i] && pref[n] + pre[i] >= pref[i]) {  
            ans++;
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
