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
    ll n;
    std::cin >> n;

    ll ans = 0;
    for (int i = 1; i <= n / 2; i++) {
        ans += (n % i == 0);
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





