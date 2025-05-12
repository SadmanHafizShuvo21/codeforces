#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    std::set<char> ch;
    for (int i = 0; i < k; i++) {
        char c;
        std::cin >> c;
        ch.insert(c);
    }

    ll ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (ch.count(s[i])) {
            cnt++;
        } 
        else {
            ans += cnt * (cnt + 1) / 2;
            cnt = 0;
        }
    }
    ans += cnt * (cnt + 1) / 2;

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
