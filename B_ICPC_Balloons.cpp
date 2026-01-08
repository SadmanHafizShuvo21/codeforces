#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::set<ll> a;
    for (int i = 0; i < n; i++) {
        a.insert(s[i]);
    }
    std::cout << 2 * a.size() + (n - a.size()) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
