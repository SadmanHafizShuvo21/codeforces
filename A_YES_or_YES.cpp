#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string s;
    std::cin >> s;
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { 
        return std::tolower(c); 
    });
    std::cout << (s == "yes" ? "YES" : "NO") << "\n";
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