#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, s, x;
    std::cin >> n >> s >> x;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    ll i = 0;
    while (i < n) {
        if (a[i] > x) {
            i++;
            continue;
        }

        ll j = i;
        std::vector<ll> segment;
        while (j < n && a[j] <= x) {
            segment.push_back(a[j]);
            j++;
        }

        ll len = segment.size();
        std::vector<ll> prefix(len + 1, 0);
        for (int k = 0; k < len; k++) {
            prefix[k + 1] = prefix[k] + segment[k];
        }

        std::map<ll, std::vector<int>> mp;
        for (int k = 0; k <= len; k++) {
            mp[prefix[k]].push_back(k);
        }

        std::vector<ll> pos_x;
        for (int k = 0; k < len; k++) {
            if (segment[k] == x) {
                pos_x.push_back(k + 1); 
            }
        }

        for (int i = 0; i < (int)pos_x.size(); i++) {
            int pos = pos_x[i];
            int next_pos = (i + 1 < (int)pos_x.size()) ? pos_x[i + 1] : (len + 1);
            for (int j = pos; j < next_pos; j++) {
                ll nd = prefix[j] - s;
                if (mp.count(nd)) {
                    auto& vec = mp[nd];
                    int cnt = std::upper_bound(vec.begin(), vec.end(), pos - 1) - vec.begin();
                    ans += cnt;
                }
            }
        }

        i = j;
    }

    std::cout << ans << '\n';
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
