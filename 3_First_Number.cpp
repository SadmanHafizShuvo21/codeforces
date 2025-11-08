#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll INF = 1e18;

llx total_digits(ll x, ll n) {
    llx ans = 0;
    ll L = x, R = x + n - 1;

    std::vector<ll> pref(20, 1);
    for (int i = 1; i <= 18; i++) {
        pref[i] = pref[i-1] * 10LL;
    }

    for (int d = 1; d <= 18; d++) {
        ll lo = std::max(L, pref[d-1]);
        ll hi = std::min(R, pref[d] - 1);
        if (lo > hi) continue;
        ans += (llx)(hi - lo + 1) * d;
    }
    return ans;
}

void solve() {
    ll n, k;
    std::cin >> n >> k;

    ll lo = 1, hi = INF, ans = -1;
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        llx t = total_digits(mid, n);
        if (t == k) {
            ans = mid;
            hi = mid - 1; // search smaller starting number
        } else if (t < k) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
