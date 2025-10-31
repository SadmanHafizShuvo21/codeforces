#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    ll ans = std::count(s.begin(), s.end(), '1');  
    for (int i = 0; i < n - 2; i++) {
        if (s.substr(i, 3) == "111") {
            ans--;
            break;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (s.substr(i, 2) == "11") {
            ans--;
            break;
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}