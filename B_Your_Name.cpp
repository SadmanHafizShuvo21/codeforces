#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::string s, s1;
    std::cin >> n >> s >> s1;
    std::sort(s.begin(), s.end());
    std::sort(s1.begin(), s1.end());
    
    std::cout << (s == s1 ? "YES" : "NO") << "\n";
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