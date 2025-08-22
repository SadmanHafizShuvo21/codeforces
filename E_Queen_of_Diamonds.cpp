#include <bits/stdc++.h>
using ll = long long;
const int MOD = 1e9 + 7;

ll mod_pow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    std::array<bool, 26> arr{};
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - 'a';
        if (!arr[x]) {
            arr[x] = true;
            cnt++;
        }
    }
    
    ll ans = mod_pow(2, n - cnt);
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
