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
    ll n, m;
    std::cin >> n >> m;

    std::string s;
    std::cin >> s;

    ll ans = 0;
    for (char ch = 'A'; ch <= 'G'; ch++) {
        ll cnt = std::count(s.begin(), s.end(), ch);
        ans += std::max(0LL, m - cnt);
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





