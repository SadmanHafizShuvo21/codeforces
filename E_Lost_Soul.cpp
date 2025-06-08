#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    if (a[n - 1] == b[n - 1]) {
        std::cout << n << '\n';
        return;
    }

    std::map<int, int> cnt;
    for (int i = n - 2; i >= 0; i--) {
    if (a[i] == b[i]) {
      std::cout << i + 1 << "\n";
      return;
    }
    if (a[i] == a[i + 1] || b[i] == b[i + 1]) {
      std::cout << i + 1 << "\n";
      return;
    }
    if (i + 2 < n) {
      cnt[a[i + 2]]++;
      cnt[b[i + 2]]++;
    }
    if (cnt[a[i]] || cnt[b[i]]) {
      std::cout << i + 1 << "\n";
      return;
    }
  }
  std::cout << 0 << "\n";
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
