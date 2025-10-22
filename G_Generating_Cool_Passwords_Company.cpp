#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::string l = "abcdefghijklmnopqrstuvwxyz";
    std::string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string d = "0123456789";
    std::string s = "!@#$%^&*()-_=+[]{};:,.<>?/";


    for (int i = 0; i < n; i++) {
        std::string ans;
        for (int j = 0; j < 3; j++) {
            ans += l[rand() % l.size()];
        }
        for (int j = 0; j < 3; j++) {
            ans += u[rand() % u.size()];
        }
        for (int j = 0; j < 3; j++) {
            ans += d[rand() % d.size()];
        }
        for (int j = 0; j < 3; j++) {
            ans += s[rand() % s.size()];
        }
        std::cout << ans << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
