#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
std::vector<ll> pref(20, 1);

llx sum(ll n) {
    if(n <= 0) return 0;
    llx res = 0, mul = 1;
    while(mul <= n) {
        ll h = n / (mul * 10);
        ll c = (n / mul) % 10;
        ll l = n % mul;
        res += (llx)h * 45 * mul;
        res += (llx)(c * (c - 1) / 2) * mul;
        res += (llx)c * (l + 1);
        mul *= 10;
    }
    return res;
}

void precompute() {
    for(int i = 1; i < 19; i++) {
        pref[i] = pref[i - 1] * 10;
    }
}

void solve() {
    ll k;
    std::cin >> k;
    llx ans = 0;
    for(int d = 1; d < 19 && k > 0; d++) {
        ll l = pref[d - 1];
        ll cnt = 9 * pref[d - 1];
        llx blk = (llx)cnt * d;
        if((llx)k >= blk) {
            ll r = pref[d] - 1;
            ans += sum(r) - sum(l - 1);
            k -= (ll)blk;
        } 
        else {
            ll full = k / d;
            if(full > 0) {
                ll r = l + full - 1;
                ans += sum(r) - sum(l - 1);
                k -= full * d;
            }

            if(k > 0) {
                ll nxt = l + full;
                std::string s = std::to_string(nxt);
                for(int i = 0; i < (int)k; i++) {
                    ans += (s[i] - '0');
                }
                k = 0;
            }
        }
    }
    std::cout << (ll)ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
