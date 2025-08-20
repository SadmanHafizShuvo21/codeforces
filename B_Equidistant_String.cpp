#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, t;
    std::cin >> s >> t;
    
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        cnt += (s[i] != t[i]);
    }

    if (cnt & 1) {
        std::cout << "impossible" << "\n";
        return;
    }

    std::string str;
    ll x = 1;
    for (int i = 0; i < s.size(); i++) {
        str += (s[i] == t[i] ? s[i] : (x++ & 1 ? s[i] : t[i]));
    }

    std::cout << str << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}