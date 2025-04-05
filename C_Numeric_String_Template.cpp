#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    ll m;
    std::cin >> m;
    while (m--) {
        std::string s;
        std::cin >> s;

        if ((ll)s.length() != n) {
            std::cout << "NO" << '\n';
            continue;
        }

        std::unordered_map<char, ll> str;
        std::unordered_map<ll, char> digit;
        bool ok = true;

        for (ll j = 0; j < n; j++) {
            char ch = s[j];
            ll num = a[j];

            if (!str.count(ch) && !digit.count(num)) {
                str[ch] = num;
                digit[num] = ch;
            } 
            else if ((str.count(ch) && str[ch] != num) || (digit.count(num) && digit[num] != ch)) {
                ok = false;
                break;
            }
        }
        std::cout << (ok ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
