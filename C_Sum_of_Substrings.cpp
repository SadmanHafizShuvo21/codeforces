#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    ll cnt = std::count(s.begin(), s.end(), '1');
    if (cnt == 0) {
        std::cout << 0 << '\n';
        return;
    }

    ll l = 0, r = n - 1;
    while (l < n && s[l] == '0') {
        l++;
    }
    while (r >= 0 && s[r] == '0') {
        r--;
    }

    ll ans = cnt * 11;
    if(k >= (n + l - r - 1) && l != r) {
        ans -= 11;
    } 
    else if (k >= n - r - 1) {
        ans -= 10;
    } 
    else if (k >= l) {
        ans -= 1;
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