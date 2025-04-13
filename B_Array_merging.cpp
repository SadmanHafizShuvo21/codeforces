#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::map<int, int> mp;
    for (int i = 0; i < 2*n; i++) {
        int x;
        std::cin >> x;
        mp[x]++;
    }

    int cnt = 0;
    for (auto i = mp.begin(); i != mp.end(); i++) {
        cnt = std::max(cnt, i->second);
    }

    std::cout << cnt << "\n";
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
