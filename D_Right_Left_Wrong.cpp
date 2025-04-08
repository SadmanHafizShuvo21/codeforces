#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<ll> pref(n + 1, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }

    std::string s;
    std::cin >> s;

    std::vector<int> l, r;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            l.push_back(i);
        }
        else {
            r.push_back(i);
        }
    }

    std::reverse(r.begin(), r.end());

    ll ans = 0;
    int i = 0;
    while (i < std::min(l.size(), r.size())) {
        if (l[i] < r[i]) {
            ans += pref[r[i] + 1] - pref[l[i]];
        }
        i++;
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
