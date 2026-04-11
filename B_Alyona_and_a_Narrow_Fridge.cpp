// 11 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

bool check(std::vector<ll> &a, ll mid, ll k) {
    std::vector<ll> b (a.begin(), a.begin() + mid);
    std::sort(b.rbegin(), b.rend());
    
    ll sum = 0;
    for (int i = 0; i < mid; i += 2) {
        sum += b[i];
    }
    return sum <= k;
}

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 1, l = 1, r = n;
    while(l <= r) {
        ll mid = (l + r) / 2;
        if (check(a, mid, k)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    std::cout << ans << "\n";
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