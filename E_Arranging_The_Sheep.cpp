#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    ll cnt = 0;
    std::vector<int> a;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            cnt++;
        }
        else {
            a.push_back(cnt);
        }
    }

    ll mid = (a.size() - 1) / 2, ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans += std::abs(a[i] - a[mid]);
    }
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
