#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

void solve() {
    ll n;
    std::cin >> n;

    ll sum = 0, cnt = 0;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;

        if (mp.count(x)) {
            sum += 2 * x;
            mp.erase(x);
            cnt += 2;
        }
        else {
            mp[x]++;
        }
    }
    
    ll ans = 0, lst = 0;
    if (cnt > 2) {
        ans = sum;
    }
    for (auto x : mp) {
        if (sum > x.first) {
            ans = std::max(ans, sum + x.first);
        }
        if (sum + lst > x.first) {
            ans = std::max(ans, sum + lst + x.first);
        }
        lst = x.first;
    }
    std::cout << ans << "\n";
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