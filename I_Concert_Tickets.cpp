#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::multiset<int> a;
    std::vector<int> b(m);
    
    for (int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        a.insert(val);
    }
    
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    
    for (int i = 0; i < m; i++) {
        auto it = a.upper_bound(b[i]);
        if (it == a.begin()) {
            std::cout << "-1"<<"\n";
        } 
        else {
            it--;
            std::cout << *it << "\n";
            a.erase(it);
        }
    } 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
