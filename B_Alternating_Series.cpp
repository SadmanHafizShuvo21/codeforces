// #include <bits/stdc++.h>
// using ll = long long;

// void solve(){
//     int n;
//     std::cin >> n;
//     std::vector<ll> a(n+1);
//     ll pref = 0, x = 0, y = 0;
//     for(int i=1; i<=n; i++){
//         if(i & 1) {
//             a[i] = -1;
//         }
//         else {
//             a[i] = std::max(1LL, (i < n ? x + 2 : y + 1) - pref);
//         }
//         pref += a[i];
//         y = x;
//         x = std::max(x, pref);
//     }
//     for(int i=1; i<=n; i++) {
//         std::cout << a[i] << " \n"[i == n];
//     }
// }

// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     int t;
//     std::cin >> t;
//     while(t--) {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            std::cout << -1;
        }
        else {
            std::cout << (i == n ? 2 : 3);
        }
        std::cout << " \n"[i == n];
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

