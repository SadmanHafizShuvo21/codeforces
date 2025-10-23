#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    int n;
    std::cin >> n;
    std::vector<std::vector<std::string>> names(n);

    for (int i = 0; i < n; i++) {
        int p; 
        std::cin >> p;
        names[i].resize(p);
        for (int j = 0; j < p; j++) {
            std::cin >> names[i][j];
        }
        std::sort(names[i].begin(), names[i].end());
    }

    std::vector<std::string> chosen(n);
    std::string prev = "";

    for (int i = 0; i < n; i++) {
        auto it = std::lower_bound(names[i].begin(), names[i].end(), prev);
        if (it == names[i].end()) {
            std::cout << "impossible\n";
            return;
        }
        chosen[i] = *it;
        prev = chosen[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout << chosen[i] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
