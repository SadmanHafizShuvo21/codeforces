#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string a, b;
    std::cin >> a >> b;
    ll n = a.size(), m = b.size();
    ll l = std::lcm(n, m);

    std::string a1, b1;
    for (int i = 0; i < l / n; i++){
        a1 += a;
    }

    for (int i = 0; i < l / m; i++){
        b1 += b;
    }

    std::cout << (a1 == b1 ? a1 : "-1") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
