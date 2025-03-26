#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout <<"-1"<<"\n";
        return;
    }
    for(int i = 1; i <= n; i += 2){
        std::cout << i << ' ';
    }
    for(int i = 2; i <= n; i += 2){
        std::cout << i << ' ';
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
