// Updated version of previous submittion
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n);

    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
        if(std::count(s[i].begin(),s[i].end(), s[i][0]) != m) {
            std::cout << "NO" << "\n";
            return;
        }
        if(i && s[i] == s[i - 1]) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    
    std::cout << "YES" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
