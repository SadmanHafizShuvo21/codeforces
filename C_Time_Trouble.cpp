#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    std::string a, b;
    std::cin >> a >> b;
    if (a.size() == 1) {
        a.push_back('0');
        std::reverse(a.begin(), a.end());
    }
    if (b.size() == 1) {
        b.push_back('0');
        std::reverse(b.begin(), b.end());
    }
    
    // std::cout << a << " " << b << "\n";
    if (a < "24" && b < "60") {
        std::cout << a << ":" << b << "\n";
    }
    else if ((a >= "24" && a < "60") && b < "24") {
        std::cout << b << ":" << a << "\n";
    }
    else {
        std::cout << -1 << "\n";
    }
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