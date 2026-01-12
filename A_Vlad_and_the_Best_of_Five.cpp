#include<bits/stdc++.h>
using ll = long long;
using lld = double;
const ll inf = 1e18;
void solve() {
    std::string s;
    std::cin >> s;

    ll a = std::count(s.begin(), s.end(), 'A');
    ll b = std::count(s.begin(), s.end(), 'B');
    std::cout << (a > b ? "A" : "B") << "\n";   
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