#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x, k;
    std::cin >> n >> x >> k;
    
    std::string s;
    std::cin >> s;
    
    ll p = 0, len = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == 'L') {
            p--;
        } 
        else {
            p++;
        }
        if (p == 0) {
            len = i;
            break;
        }
    }
    
    ll pos=x, ans=0;
    for (int i = 1; i <= n; i++) {
        k--;
        if (s[i - 1] == 'L') {
            pos--;
        } 
        else {
            pos++;
        }
        if (pos == 0) {
            ans++;
            break;
        }
    }
    if (ans && len) {
        ans += k / len;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}