#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll max = *std::max_element(a.begin(),a.end());
    while (m--) {
        char ch;
        int l, r;
        std::cin >> ch >> l >> r;

        if(max>=l && max<=r) {
            max += (ch == '+' ? 1 : -1);
        }

        std::cout << max << " \n"[m==0];
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
