//24 Jun 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::string s;
    std::cin >> n >> m >> s;
  
    std::vector<int> index(m);
    for (int i = 0; i < m; i++) {
        std::cin >> index[i];
        index[i]--;
    }
    std::string c;
    std::cin >> c;
    
    std::sort(index.begin(), index.end());
    index.erase(std::unique(index.begin(), index.end()), index.end());
    m = index.size();
    std::sort(c.begin(), c.end());
    for (int i = 0; i < m; i++) {
        s[index[i]] = c[i];
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
