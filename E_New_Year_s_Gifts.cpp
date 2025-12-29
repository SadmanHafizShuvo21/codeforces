#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

bool canAchieve(ll x, ll n, ll m, ll k, const std::vector<ll>& a, const std::vector<ll>& x_arr, 
                const std::vector<ll>& y_arr, const std::vector<ll>& z_arr, const std::vector<ll>& d, ll sy) {
    if (x == 0) return true;
    if (x > n || sy > k) return false;
    
    ll K = k - sy;
    std::vector<ll> id(n);
    std::iota(id.begin(), id.end(), 0);
    
    std::vector<ll> bd = id;
    std::sort(bd.begin(), bd.end(), [&](ll p, ll q) {
        return d[p] != d[q] ? d[p] < d[q] : p < q;
    });
    
    ll sd = 0;
    std::vector<std::pair<ll, ll>> s;
    for (ll i = 0; i < x; i++) {
        ll j = bd[i];
        sd += d[j];
        s.emplace_back(x_arr[j], d[j]);
    }
    
    std::sort(s.begin(), s.end());
    
    ll p = 0, sv = 0;
    std::priority_queue<ll> pq;
    for (ll b = 0; b < m && p < (ll)s.size(); b++) {
        while (p < (ll)s.size() && s[p].first <= a[b]) {
            pq.push(s[p].second);
            p++;
        }
        if (!pq.empty()) {
            sv += pq.top();
            pq.pop();
        }
    }
    
    return sd - sv <= K;
}

ll binarySearch(ll n, ll m, ll k, const std::vector<ll>& a, const std::vector<ll>& x_arr, 
                const std::vector<ll>& y_arr, const std::vector<ll>& z_arr, const std::vector<ll>& d, ll sy) {
    ll lo = 0, hi = n, ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) >> 1;
        if (canAchieve(mid, n, m, k, a, x_arr, y_arr, z_arr, d, sy)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;
    
    std::vector<ll> a(m);
    for (ll i = 0; i < m; i++) std::cin >> a[i];
    
    std::vector<ll> x_arr(n), y_arr(n), z_arr(n), d(n);
    ll sy = 0;
    for (ll i = 0; i < n; i++) {
        std::cin >> x_arr[i] >> y_arr[i] >> z_arr[i];
        d[i] = z_arr[i] - y_arr[i];
        sy += y_arr[i];
    }
    
    if (sy > k) {
        std::cout << 0 << "\n";
        return;
    }
    
    std::sort(a.begin(), a.end(), std::greater<ll>());
    std::cout << binarySearch(n, m, k, a, x_arr, y_arr, z_arr, d, sy) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
