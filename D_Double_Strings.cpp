#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::string> s(n);
    std::map<std::string, ll> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
        mp[s[i]]++;
    }
    
    for (int i = 0; i < n; i++) {
        bool ok = false;
        for (int j = 1; j < s[i] .size(); j++) {
            if (mp[s[i].substr(0, j)] && mp[s[i].substr(j)]) {
                ok = true;
                break;
            }
        }
        std::cout << ok << (i == n - 1 ? "\n" : "");
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
}
