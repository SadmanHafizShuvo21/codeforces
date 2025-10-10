#include <bits/stdc++.h>
using ll = long long;
std::vector<std::string> valid = {"00:00", "11:11", "22:22"};

void solve() {
    std::string s;
    std::cin >> s;
    for (std::string v : valid) {
        if (s <= v) {   
            std::cout << v << "\n";
            return;
        }
    }

    std::cout << "00:00" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
