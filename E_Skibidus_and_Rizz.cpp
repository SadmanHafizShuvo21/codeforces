#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;
    
    if (std::abs(n - m) > k || std::max(n, m) < k) {
        std::cout << -1 << "\n";
        return;
    }
    
    int t = 0;
    if (n < m) {
        std::swap(n, m);
        t++;
    }

    std::string s;
    while (n > 0 || m > 0) {
        for (int i = 0; i < k && n; i++) {
            s += '0' ^ t;
            n--;
        }
        for (int i = 0; i < k && m; i++) {
            s += '1' ^ t;
            m--;
        }
    }
    std::cout << s << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}