#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    ll ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            cnt++;
        }
        else {
            cnt--;
        }
        ans = std::min(cnt , ans);
    }

    std::cout << -ans << "\n";
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
