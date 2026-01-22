#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<int> primes;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll mx = *std::max_element(a.begin(), a.end());
    ll mn = *std::min_element(a.begin(), a.end());

    ll mxc = std::count(a.begin(), a.end(), mx);
    ll mnc = std::count(a.begin(), a.end(), mn);

    std::cout << mx - mn << " " << (mx == mn ? n * (n - 1) / 2 : mxc * mnc) << "\n";
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

