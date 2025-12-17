#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n; 
    std::cin >> n;
    std::vector<std::string> logo = {
        "*****...******...***...**...**....**",
        "**......**.......****..**...**....**",
        "*****...**.......**.**.**...**....**",
        "...**...**.......**..****...**....**",
        "*****...******...**...***...********"
    };

    for (std::string &row : logo) {
        std::string s;
        for (char c : row) {
            s.append(n, c);  
        }
        for (int i = 0; i < n; i++) {
            std::cout << s << '\n'; 
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
