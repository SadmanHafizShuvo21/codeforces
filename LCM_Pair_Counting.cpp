// #include <bits/stdc++.h>
// using ll = long long;

// ll gcd(ll a, ll b) {
//     while (b) {
//         ll t = b;
//         b = a % b;
//         a = t;
//     }
//     return a;
// }

// ll lcm(ll a, ll b) {
//     return a / gcd(a, b) * b;
// }

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }

//     ll count = 0;
//     for (int i = 0; i < n; i++) {
//         int lim = std::min(2 * n - i - 1, n - 1);
//         for (int j = i + 1; j <= lim; j++) {
//             ll s = i + j + 2;
//             ll x = a[i] + j + 1;
//             ll y = a[j] + i + 1;
//             if (x > s || y > s) {
//                 continue;
//             }
//             if (lcm(x, y) == s) {
//                 count++;
//             }
//         }
//     }

//     std::cout << count << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);

//     solve();
// }
#include <bits/stdc++.h>
using ll = long long;
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    
    ll count = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] == i) {
            count++;
        } 
    }
    
    std::cout << count * (count - 1) / 2 << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
