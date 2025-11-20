#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;

    ll ans = 0, n = s.size();
    for (int i = 0; i < n; ) {
        if (s.substr(i, 2) == "ha" && i + 2 <= n) {
            ans++;
            i += 2;
        }
        else if (s.substr(i, 5) == "boooo" && i + 5 <= n) {
            ans--;
            i += 5;
        }
        else if (s.substr(i, 5) == "bravo" && i + 5 <= n) {
            ans += 3;
            i += 5;
        }
        else {
            i++;
        }

        // std::cout << ans << " ";
    }
    std::cout << ans << "\n";
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