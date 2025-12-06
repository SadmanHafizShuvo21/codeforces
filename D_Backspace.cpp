#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    std::string s, t;
    std::cin >> s >> t;
    
    ll n = s.length(), m = t.length();
    ll st = (n ^ m) & 1, j = 0;
    for (int i = st; i < n && j < m; i += 2) {
        if (s[i] == t[j]) {
            j++;
            i--;
        }
    }
    std::cout << (j == m ? "YES" : "NO") << "\n";
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
