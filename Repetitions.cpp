#include<bits/stdc++.h>
using ll = long long;   

void solve() {
    std::string s;
    std::cin >> s;
    ll n = s.size();
    ll cnt = 1, cur = 1;
    for (ll i = 1; i < n; i++) {    
        if (s[i] == s[i - 1]) {
            cur++;
        } 
        else {
            cnt = std::max(cnt, cur);
            cur = 1;
        }
    }
    std::cout << std::max(cnt, cur) << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}