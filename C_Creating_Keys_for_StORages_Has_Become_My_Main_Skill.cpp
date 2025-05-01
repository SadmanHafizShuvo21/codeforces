#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);

    ll cur = 0, val = 0;
    while (cur < n && ((cur & x) == cur)) {
        val |= cur;
        cur++;
    }

    if(cur == n && val != x) {
        cur--;
    }
    for (int i = 0; i < n; i++) {
        std::cout << (i < cur ? i : x) << " \n"[i + 1 == n];
    }
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
