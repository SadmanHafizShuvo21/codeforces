// 07 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    std::map<ll, ll> freq;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        freq[a[i]]++;
    }

    ll mx = *std::max_element(a.begin(), a.end());
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    std::vector<ll> ans;
    for (ll i = 1; i * i <= sum; i++) {
        if (sum % i != 0) {
            continue;
        }

        ll div[2] = {i, sum / i};
        for (int j = 0; j < 2; j++) {
            ll l = div[j];
            if (l < mx) continue;

            bool ok = true;
            for (auto [x, c] : freq) {
                if (x == l) {
                    continue;
                }
                ll y = l - x;
                if (!freq.count(y) || freq[y] != c || (x * 2 == l && c % 2)) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                ans.push_back(l);
            }
        }
    }

    std::sort(ans.begin(), ans.end());
    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
