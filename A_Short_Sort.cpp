#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string s, str = "abc";
    std::cin >> s;

    ll cnt = 0;
    for (int i = 0; i < 3; i++) {
        cnt += (s[i] != str[i]);
    }
    std::cout << (cnt > 2 ? "NO" : "YES") << "\n";   
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