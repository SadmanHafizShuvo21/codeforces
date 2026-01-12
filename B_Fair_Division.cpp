#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll o = std::count(a.begin(), a.end(), 1);
    ll t = std::count(a.begin(), a.end(), 2);
    if (sum % 2) {
        std::cout << "NO" << "\n";
        return;
    }
    
    if (t % 2 && o >= 2) {
        o -= 2;
        t--;
    }

    // std::cout << t << "\n";
    std::cout << ((o % 2 == 0 && t % 2 == 0) ? "YES" : "NO") << "\n";
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

















