#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, c, k;
    std::cin >> n >> c >> k;
    std::vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll fill = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (fill == 0 && k > 0) {
            fill = c;
            k--;
        }

        if (a[i] == 1) {
            if (fill > 0) {
                cnt++;
                fill--;
            }
        }
        else{
            fill = 0;
        }
    }
    std::cout << cnt << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
