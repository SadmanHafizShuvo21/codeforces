#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> pref(n + 1);
    std::partial_sum(a.begin(), a.end(), pref.begin() + 1);

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            ll mn = inf, mx = -inf;
            for (int j = 0; j < n; j += i) {
                ll sum = pref[j + i] - pref[j];
                mx = std::max(mx, sum);
                mn = std::min(mn, sum);
            }
            ans = std::max(ans, mx - mn);
        }
    }
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
