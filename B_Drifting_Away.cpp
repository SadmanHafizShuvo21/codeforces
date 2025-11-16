#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    ll l = 0, r = s.size() - 1;
    while(l <= r && s[l] == '<') {
        l++;
    }
    while(r >= 0 && s[r] == '>') {
        r--;
    }

    if (r - l >= 1) {
        std::cout << -1 << '\n';
        return;
    }

    ll ans = std::max(l, (ll)s.size() - 1 - r);
    ans += (r - l == 0 ? 1 : 0); 

    std::cout<< ans <<"\n";
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
