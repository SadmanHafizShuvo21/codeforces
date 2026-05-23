// 23 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

auto getDigit(char c) {
    if (c >= 'a' && c <= 'c') return '2';
    if (c >= 'd' && c <= 'f') return '3';
    if (c >= 'g' && c <= 'i') return '4';
    if (c >= 'j' && c <= 'l') return '5';
    if (c >= 'm' && c <= 'o') return '6';
    if (c >= 'p' && c <= 's') return '7';
    if (c >= 't' && c <= 'v') return '8';
    return '9';
};
void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    std::string str;
    for (int i = 0; i < n; i++) {
        str.push_back(getDigit(s[i][0]));
    }
    std::cout << str << "\n";
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