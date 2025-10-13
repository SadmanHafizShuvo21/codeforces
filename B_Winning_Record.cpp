#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

void solve() {
    ll n, q;
    std::cin >> n >> q;

    std::string s;
    std::cin >> s;
    
    std::vector<ll> pref(n + 1, 0);
    for (int i = 0; i< n; i++) {
        pref[i + 1] += (pref[i] + (s[i] == 'W' ? 1 : -1));
    }

    std::string str;
    while(q--) {
        ll l, r;
        std::cin >> l >> r;

        ll win = pref[r] - pref[l - 1];
        str += (win > 0 ? 'Y' : 'N');
    }
    std::cout << str << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}