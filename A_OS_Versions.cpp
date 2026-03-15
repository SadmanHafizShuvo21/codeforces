// 15 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
  std::vector<std::string> s = {"Ocelot", "Serval", "Lynx"};
  std::string x, y;
  std::cin >> x >> y;
  for (int i = 0; i < 3; i++) {
    if (x == s[i]) {
      for (int j = 0; j <= i; j++) {
        if (y == s[j]) {
          std::cout << "Yes" << "\n";
          return;
        }
      }
    }
  }
  std::cout << "No" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}