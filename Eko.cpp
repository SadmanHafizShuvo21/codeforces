// 20 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

ll check(std::vector<ll> &a,ll n, ll x) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            sum += (a[i] - x);
        }
    }
    return sum;
} 
void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    ll l = 0, r = 2e9 + 7;
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        if (check(a, n, mid) >= m) {
            l = mid;
        } 
        else {
            r = mid;
        }
    }

    std::cout << l << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
