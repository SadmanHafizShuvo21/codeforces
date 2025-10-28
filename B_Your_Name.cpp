#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::string a, b;
    std::cin >> n >> a >> b;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    std::cout << (a == b ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}