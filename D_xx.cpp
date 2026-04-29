// 22 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


std::string check(std::string s) {
    std::string t;
    for (char c : s) {
        t += c;
        if (t.size() >= 4 && t.substr(t.size() - 4) == "(xx)") {
            t.pop_back();
            t.pop_back();
            t.pop_back();
            t.pop_back();
            t += "xx";
        }
    }
    return t;
}

void solve() {
    std::string a, b;
    std::cin >> a >> b; 
    
    if (a == b) {
        std::cout << "Yes" << "\n";
        return;
    }

    std::string s = check(a);
    std::string s1 = check(b);  

    // std::cout << s << "\n";
    // std::cout << s1 << "\n";
    std::cout << (s == s1 ? "Yes" : "No") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}