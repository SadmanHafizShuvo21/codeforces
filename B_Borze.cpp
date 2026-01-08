#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            std::cout << '0';
        }
        else if (s.substr(i, 2) == "-.") {
            std::cout << '1';
            i++;
        }
        else if (s.substr(i, 2) == "--") {
            std::cout << '2';
            i++;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}