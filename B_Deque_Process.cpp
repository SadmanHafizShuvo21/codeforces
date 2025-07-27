#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }

    ll l = 0, r = n - 1, t = 0;
    std::string s;
    while (l < r) {
        if ((p[l] < p[r]) ^ t) {
            s += "LR";
        } 
        else {
            s += "RL";
        }
        l++;
        r--;
        t ^= 1;
    }

    if (l == r) {
        s += 'L';
    }
    std::cout << s << "\n";
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
