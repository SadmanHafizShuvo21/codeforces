#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll a, b;
    std::cin >> a >> b;
    std::vector<std::string> s = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    ll i = std::max(a, b);
    std::cout << s[i - 1] << "\n";   
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