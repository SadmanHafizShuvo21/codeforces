#include <bits/stdc++.h>
using ll = long long;
const int MOD = 1e9+7;

int n, m, k;
std::vector<int> g;
std::vector<int> a;
std::map<ll, ll> dp;

int play(int mask, int turn) {
    if (__builtin_popcount(mask) == 1) {
        int idx = __builtin_ctz(mask);
        return a[idx];
    }
    long long key = ((long long)mask << 1) | turn;
    if (dp.count(key)) return dp[key];
    std::vector<int> idxs;
    int p = 0;
    for (int i = 0; i < n; i++) if (mask & (1<<i)) {
        p++;
        if (std::binary_search(g.begin(), g.end(), p)) {
            idxs.push_back(i);
        }
    }
    if (turn == 0) {
        int best = 0;
        for (int id : idxs) {
            int nm = mask ^ (1<<id);
            best = std::max(best, play(nm, 1));
        }
        return dp[key] = best;
    } 
    else {
        int best = 1e9;
        for (int id : idxs) {
            int nm = mask ^ (1 << id);
            best = std::min(best, play(nm, 0));
        }
        return dp[key] = best;
    }
}

void solve() {
    std::cin >> n >> m;
    std::cin >> k;
    g.resize(k);
    for (int i = 0; i < k; i++) {
        std::cin >> g[i];
    }

    ll ans = 0;
    a.assign(n, 0);
    int total = 1;
    for (int i = 0; i < n; i++) {
        total *= m;
    }

    for (int k = 0; k < total; k++) {
        int tmp = k;
        for (int i = 0; i < n; i++) {
            a[i] = (tmp % m) + 1;
            tmp /= m;
        }
        dp.clear();
        ans += play((1<<n)-1, 0);
        if (ans >= MOD) ans -= MOD;
    }
    
    std::cout << ans % MOD << "\n";
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
