#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string a, b;
    std::cin >> a >> b;
    int n = a.size();

    for (int i = 0; i < n-1; i++) {
        if (a[i] == '0' && b[i] == '0'  && a[i+1]== '1' && b[i+1] == '1') {
            std::cout<< "YES" << "\n";
            return;
        }
    }
    std::cout << "NO" << "\n";
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
