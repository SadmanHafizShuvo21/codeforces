// 24 Dec 2024
#include <bits/stdc++.h>
using ll = long long;
void solve(){
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<int> a(m);
    for (int i = 0; i < m; i++){
        std::cin >> a[i];
    }
    std::vector<int> q(k);
    std::vector<bool> used(n + 1, false);
    for (int i = 0; i < k; i++){
        std::cin >> q[i];
        used[q[i]] = true;
    }
    for (int i = 0; i < m; ++i){
        if (k == n || (k == n - 1 && !used[a[i]])){
            std::cout << 1;
        }
        else{
            std::cout << 0;
        }
    }
    std::cout << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--)
        solve();
}
