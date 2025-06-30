#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    ll n = s.size();
    ll R = std::count(s.begin(), s.end(), 'R');
    ll S = std::count(s.begin(), s.end(), 'S');
    ll P = std::count(s.begin(), s.end(), 'P');

    ll mx = std::max({R, S, P});
    char ch = (R == mx) ? 'P' : (S == mx) ? 'R' : 'S';
    std::cout << std::string(n, ch) << '\n';
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