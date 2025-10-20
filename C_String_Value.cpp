#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    ll ans = 1, cur = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cur++;
        } 
        else {
            cur = 1;
        }
        ans = std::max(ans, cur);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}