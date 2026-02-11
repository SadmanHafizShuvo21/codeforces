// 10 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s, str = "7AB5CDE6FGHI3JKL1MNO9PQR2ST0UV4WXYZ8";
    std::cin >> n >> s;
    
    std::vector<ll> pos(256, -1);
    for (int i = 0; i < str.size(); i++) {
        pos[str[i]] = i;
    }

    std::sort(s.begin(), s.end(), [&](char a, char b) {
        return pos[a] < pos[b];
    });
    
    std::cout << s << "\n";
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
