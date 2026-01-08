#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    if (n >= 1900) {
        std::cout << "Division 1" << "\n";
    }
    else if (n >= 1600) {
        std::cout << "Division 2" << "\n";
    }
    else if (n >= 1400) {
        std::cout << "Division 3" << "\n";
    }
    else {
        std::cout << "Division 4" << "\n";
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
//     solve();
}