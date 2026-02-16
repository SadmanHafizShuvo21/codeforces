// 15 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

ll hex_val(char c) {
    return c <= '9' ? c - '0' : c - 'a' + 10;
}

char to_hex(int x) {
    return x < 10 ? '0' + x : 'a' + (x - 10);
}

void solve() {
    std::string s, str = "#";
    std::cin >> s;
    for (int i = 1; i < 7; i += 2) {
        int val = 255 - (hex_val(s[i]) * 16 + hex_val(s[i + 1]));
        str.push_back(to_hex(val / 16));
        str.push_back(to_hex(val % 16));
    }
    std::cout << str << "\n";
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
