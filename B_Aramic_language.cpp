#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::set<std::string> str;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        std::set<char> st(s.begin(), s.end());
        std::string x (st.begin(), st.end());
        str.insert(x);
    }
    std::cout << str.size() << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
