//24 Jun 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::string s;
    std::cin >> n >> m >> s;
  
    std::vector<int> ind(m);
    for (int i = 0; i < m; i++) {
        std::cin >> ind[i];
        ind[i]--;
    }
    std::string c;
    std::cin >> c;
    
    std::sort(ind.begin(), ind.end());
    ind.erase(std::unique(ind.begin(), ind.end()), ind.end());
    m = ind.size();
    std::sort(c.begin(), c.end());
    for (int i = 0; i < m; i++) {
        s[ind[i]] = c[i];
    }
    std::cout << s << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while(t--)
    solve();
    return 0;
}
