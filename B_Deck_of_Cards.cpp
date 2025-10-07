#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    std::map<ll, ll> mp;
    for (char ch : s) {
        mp[ch - '0']++;
    }

    std::string str(n, '?');
    for (int i = 0; i < n; i++) {
        if (i < mp[0] || i >= n - mp[1] || n == k) {
            str[i] = '-';
        } 
        else if (i >= mp[0] + mp[2] && i < n - mp[1] - mp[2]) {
            str[i] = '+';
        } 
    }
    std::cout << str << "\n";
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