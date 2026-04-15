// 15 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::vector<std::pair<std::string, ll>> abr = {{"/button", 1}, {"/dead", 2}, {"/eat", 3}, {"/fn", 4}, {"/shui", 5}, {"/veg", 6},  {"/you", 7}};
    std::vector<std::pair<std::string, ll>> des = {{"bugcat-pressing-the-button", 1},{"bugcat-dead", 2},{"bugcat-eating", 3},{"bugcat-angry", 4},{"bugcat-sleeping", 5},{"broccolibugcat", 6},{"fishbugcat", 7}};

    std::string s;
    std::cin >> s;
    if (s[0] == '/') {
        for (auto &[a, b] : abr) {
            if (s == a) {
                std::cout << "abbr." << " " << b << "\n";
                return;
            }
        }
    } 
    else {
        for (auto &[a, b] : des) {
            if (s == a) {
                std::cout << "description" << " " << b << "\n";
                return;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}