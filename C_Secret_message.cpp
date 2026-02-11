#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<std::string> s(k);
    for (int i = 0; i < k; i++) {
        std::cin >> s[i];
    }

    std::vector<ll> mask(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            mask[i] |= 1LL << (s[j][i] - 'a');
        }
    }

    std::vector<int> divs;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i * i != n) {
                divs.push_back(n / i);
            }
        }
    }
    std::sort(divs.begin(), divs.end());

    for (int d : divs) {
        bool ok = true;
        std::vector<ll> v(d, 0);

        for (int r = 0; r < d && ok; r++) {
            ll cur = (1LL << 26) - 1;
            for (int i = r; i < n; i += d) {
                cur &= mask[i];
                if (cur == 0) {
                    ok = false;
                    break;
                }
            }
            v[r] = cur;
        }

        if (ok) {
            std::string ans(n, ' ');
            for (int i = 0; i < n; i++) {
                ans[i] = 'a' + __builtin_ctzll(v[i % d]);
            }
            std::cout << ans << "\n";
            return;
        }
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
