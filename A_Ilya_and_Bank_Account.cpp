#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    if (s[0] != '-') {
        std::cout << s << "\n";
        return;
    }

    std::string s1 = s.substr(0, s.size() - 1);                    
    std::string s2 = s.substr(0, s.size() - 2) + s.back();         

    int v1 = std::stoi(s1);
    int v2 = std::stoi(s2);

    std::cout << std::max(v1, v2) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
