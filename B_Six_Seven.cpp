// 05 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll six = std::count(a.begin(), a.end(), 6);
    ll seven = std::count(a.begin(), a.end(), 7);

    ll mn = std::min(six, seven);
    ll mx = std::max(six, seven);
    
    std::cout << std::min(std::max((mx + mn - 1), 0LL), 2 * mn) << "\n";
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