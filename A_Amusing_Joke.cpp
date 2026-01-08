#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string a, b, c;
    std::cin >> a >> b >> c;
    a += b;
    std::sort(a.begin(), a.end());
    std::sort(c.begin(), c.end());

    std::cout << (a == c ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}