// 18 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m, h;
    std::cin >> n >> m >> h;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> add(n, 0), last(n);
    ll cnt = 0;
    while (m--) {
        ll b, c;
        std::cin >> b >> c;
        b--; 

        if (last[b] < cnt) {
            add[b] = 0;
            last[b] = cnt;
        }
        
        add[b] += c;
        if (a[b] + add[b] > h) {
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (last[i] < cnt) {
            add[i] = 0;
        }
        std::cout << a[i] + add[i] << " \n"[i == n - 1];
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
    // solve();
}
