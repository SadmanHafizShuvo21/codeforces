#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> freq(n + 2, 0);

    while (q--) {
        ll l, r;
        std::cin >> l >> r;
        l--;
        freq[l]++;
        freq[r]--;
    }

    for (int i = 1; i < n; i++) {
        freq[i] += freq[i - 1];
    }
    freq.resize(n); 

    std::sort(a.rbegin(), a.rend());
    std::sort(freq.rbegin(), freq.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += 1LL * a[i] * freq[i];
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
