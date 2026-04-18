// 18 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

// void solveL() {
//     ll n;
//     std::cin >> n;
//     std::vector<ll> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }

//     ll ans = 0;
//     for (int i = 0; i < n - 1; i++) {
//         if (a[i] > a[i + 1]) {
//             ans += a[i] - a[i + 1];
//             a[i + 1] = a[i];
//         }
//     }
//     std::cout << ans << "\n";
// }

// void solveF() {
//     std::string s;
//     std::cin >> s;

//     ll ans = 1, cnt = 1;
//     for (int i = 0; i < s.size() - 1; i++) {
//         if (s[i] == s[i + 1]) {
//             cnt++;
//         }
//         else {
//             cnt = 1;
//         }
//         ans = std::max(ans, cnt);
//     }
//     std::cout << ans << "\n";
// }

// void solveH() {
//     ll n, k;
//     std::cin >> n >> k;

//     std::string s, str = "";
//     std::cin >> s;

//     ll i = 0;
//     while (k > 25) {
//         ll mx = std::max(s[i] - 'a', 'z' - s[i]);
//         ll side = s[i] - 'a' > 'z' - s[i] ? 1 : 0;
//         k -= mx;
//         str += (s[i] + (side == 0 ? mx : -mx));
//         // std::cout << str << " " << mx << " ";
//         i++;
//     }

//     // std::cout << str << "\n";
//     ll side = s[i] - 'a' > 'z' - s[i] ? 1 : 0;
//     str += (s[i] + (side == 0 ? k : -k));
//     i++;

//     if (i > s.size()) {
//         std::cout << -1 << "\n";
//         return;
//     }  
//     for (int j = i; j < s.size(); j++) {
//         str += s[j];
//     }
//     std::cout << str << "\n";
// }
// void solveG() {
//     ll p, m;
//     std::cin >> p >> m;

//     ll team = (p + m) / 4;
//     std::cout << std::min({team, p, m}) << "\n";
// }

void solveC() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    
    ll mn, mx = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mx += (a[i] + m - 1) / m;
    }

    mn = (std::accumulate(a.begin(), a.end(), 0LL) + m - 1) / m;
    
    std::cout << mn << " " << mx << "\n";
}

// void solveB() {
//     ll n;
//     std::cin >> n;
//     std::vector<ll> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }

//     ll s = 0, e = 0, cnts = 0, cnte = 0, ans = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] == 2) {
//             s++;
//             cnts = s;
//             e = 0;
//         }
//         else {
//             e++;
//             cnte = e;
//             s = 0;
//         }
//         // std::cout << s << " " << e << " " << cnte << " " << cnts << "\n";
//         ans = std::max(ans, std::min(cnts, cnte));
//     }
//     std::cout << 2 * ans << "\n";
// }
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        // solveG();
        solveC();
    }
    // solveL();
    // solveH();
    // solveB();
}