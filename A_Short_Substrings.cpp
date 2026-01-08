#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string s, str;
    std::cin >> s;
    str.push_back(s[0]);
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i + 1]) {
            str.push_back(s[i]);
        }
        else {
            str.push_back(s[i]);
            i++;
        }
    }
    std::cout << str << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}