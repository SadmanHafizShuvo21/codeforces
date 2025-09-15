#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;


void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll cnt = 0, mn = 1e9;
    std::vector<ll> ans;
    for (int i = 0; i < n; i++) {
        if (a[i] > mn) {
            ans.push_back(i + 1);
            cnt++;
        }
        else {
            mn = a[i];
        }
    }
    std::cout << cnt << '\n';
    for (int i = 0; i < cnt; i++) {
        std::cout << ans[i] << " \n"[i == cnt - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
