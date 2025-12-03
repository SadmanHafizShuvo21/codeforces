// #include <bits/stdc++.h>
// using ll = long long;
// const ll N = 2e5 + 5;

// ll check (ll x) {
//     return x > 0 && (x & (x - 1)) == 0;
// }
// void solve() {
//     ll a, b;
//     std::cin >> a >> b;

//     ll dif = std::llabs(a - b);;
//     if (dif == 0) {
//         std::cout << 0 << "\n";
//         return;
//     }
//     if (check(dif)) {
//         std::cout << 1 << "\n";
//         return;
//     }
    
//     for (ll i = 1; i <= dif; i <<= 1) {
//         if (check(dif - i)) {
//             std::cout << 2 << "\n";
//             return;
//         }
//     }

//     std::cout << 3 << "\n";
// }

// int main() {
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
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    std::vector<std::string> s;
    std::string str;
    while(std::cin >> str) {
        s.push_back(str);
    }
    
    for (int i = (int)s.size() - 1; i >= 0 ; i--) {
        std::cout << s[i] << " \n"[i == 0];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
