#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::map<int, int> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }
    bool ok = false;
    for (auto& [x, v] : mp) {
        if (v >= 4) {
            ok = true;
            break;
        }
    }
    if (ok) {
        std::cout << "Yes" << "\n";
        return;
    }
    std::vector<int> b;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        b.push_back(it->first);
    }
    std::sort(b.begin(), b.end());
    int c = 0, p = -1e9;
    for (int x : b) {
        if (x != p + 1) c = 0;
        if (mp[x] >= 2) {
            c++;
            if (c >= 2) {
                ok = true;
                break;
            }
        }
        p = x;
    }
    std::cout << (ok ? "Yes" : "No") << '\n';
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
