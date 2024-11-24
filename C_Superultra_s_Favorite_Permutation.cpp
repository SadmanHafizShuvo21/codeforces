#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    if (n < 5) {
        std::cout << -1 << "\n";
        return;
    }

    for (int i = 1; i <= n; i += 2) {
        if( i == 5) continue;
        std::cout<<i<<" ";
    }
    std::cout<<5<<" "<<4<<" ";
    for (int i = 2; i <= n; i += 2) {
        if(i==4) continue;
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();
}
