#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                std::cout << '#';
            }
            else {
                if(i % 4 == 1 && j == m - 1) {
                    std::cout << '#';
                }
                else if (i % 4 == 3 && j == 0) {
                    std::cout << '#';
                }
                else {
                    std::cout << '.';
                }
            }
        }
        std::cout << "\n";
    }
    
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