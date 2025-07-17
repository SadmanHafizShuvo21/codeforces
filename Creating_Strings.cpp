#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    std::sort(s.begin(), s.end());
    std::vector<std::string> perms;
    
    do {
        perms.push_back(s);
    } while (std::next_permutation(s.begin(), s.end()));

    std::cout << perms.size() << "\n";
    for (auto str : perms) {
        std::cout << str << "\n";
    }
}
 
int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr);
 
    solve();
}
