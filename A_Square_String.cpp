#include<bits/stdc++.h>
using ll = long long;
using lld = double;
const ll inf = 1e18;
void solve() {
    std::string s;
    std::cin >> s;

    ll n = s.size();
    if (n % 2) {
        std::cout << "NO" << "\n";
        return;
    }

    std::string a = s.substr(0, n/2);
    std::string b = s.substr((n + 1) / 2, n);
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
    // solve();
}