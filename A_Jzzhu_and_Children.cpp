// #include<bits/stdc++.h>
// using ll = long long;

// void solve() {
//     ll n, m;
//     std::cin >> n >> m;
//     std::vector < ll > a(n);

//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     ll pos = -1;
//     for (int i = 0; i < n; i++) {
//         int r = (a[i] + m - 1) / m;
//         if (pos == -1 || r >= (a[pos] + m - 1) / m) {
//             pos = i;
//         }
//     }
//     std::cout << pos + 1 << "\n"; 
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
    
//     solve();
// }
#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector < ll > a;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        a.push_back((x + m - 1)/ m);
    }
    std::reverse(a.begin(),a.end());

    auto it = std::max_element(a.begin(), a.end());
    int idx = it - a.begin();
    std::cout << n - idx << "\n"; 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
