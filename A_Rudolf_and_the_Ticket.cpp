#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<int> primes;
std::vector<int> arr[N];
ll depth[N], vis[N];

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;

    std::vector<ll> a(n), b(m);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    ll ans = 0;
    for (int i = 0; i < n && a[i] < k; i++) {
        for (int j = 0; j < m && b[j] < k; j++) {
            ans += (a[i] + b[j] <= k);
        }
    }
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
    // solve();
}





