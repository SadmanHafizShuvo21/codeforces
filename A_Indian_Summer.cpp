#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::set<std::pair<std::string, std::string>> set;

    for (int i = 0; i < n; i++) {
        std::string s, s1;
        std::cin >> s >> s1;
        set.insert({s, s1});  
    }
    std::cout << set.size() << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}