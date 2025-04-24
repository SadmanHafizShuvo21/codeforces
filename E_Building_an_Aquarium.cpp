#include <bits/stdc++.h>
using ll = long long;

bool canFill(std::vector<int>& a, ll h, ll x) {
    ll total = 0;
    for (int i = 0; i < a.size(); i++) {
        if (h > a[i]) {
            total += h - a[i];
            if (total > x) {
                return false;
            }
        }
    }
    return true;
}

ll binarySearch(std::vector<int>& a, ll x, ll lo, ll hi){
    ll ans = 1;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (canFill(a, mid, x)) {
            ans = mid;
            lo = mid + 1;
        } 
        else {
            hi = mid - 1;
        }
    }
    return ans;
}
void solve() {
    ll n, x;
    std::cin >> n >> x;

    std::vector<int> a(n);
    int maxA = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(),a.end());
    ll lo = 1, hi = a[n-1] + x + 1;

    ll ans = binarySearch(a, x, lo, hi);
    std::cout << ans << "\n";
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
