#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, s1;
    std::cin >> s;

    for (int i = 0; i < s.size(); i++) {
        ll x = s[i] - '0';
        ll val = std::min(x, 9 - x);
        
        if (s[i] == '9' && i == 0) {
            s1.push_back(s[0]);
        }
        else {
            s1 += (val + '0');
        }
    }

    std::cout << s1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}