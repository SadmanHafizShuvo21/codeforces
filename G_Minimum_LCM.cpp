#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout << n/2 << " " << n/2 <<"\n";
    }
    else if (n % 3 == 0){
        std::cout << n/3 << " " << n-(n/3) <<"\n";
    }
    else{
        std::cout << 1 << " " << n-1 <<"\n";
    }
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
