#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    std::string s;
    std::cin >> s;
    
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            cnt++;
        }
        else {
            cnt--;
            if (cnt < 0) {
                break;
            }
        }
    }

    std::cout << (cnt == 0 ? "Yes" : "No") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}