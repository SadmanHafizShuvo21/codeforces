#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;
    
    if (n % 2) {
        std::cout << -1 << "\n";
        return;
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if ((s[i] == ')') == i % 2) {
            cnt++;
        }
    }

    if (cnt < 2 || cnt % 2) {
        std::cout << -1 << "\n";
        return;
    }

    std::string ans;
    cnt /= 2;
    for (int i = 1; i < cnt; i++) {
        ans += "()";
    }
    
    ans += "(";
    for (int i = 0; i < n / 2 - cnt; i++) {
        ans += "()";
    }
    ans += ")";
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}