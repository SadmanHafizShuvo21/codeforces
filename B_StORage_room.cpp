#include <bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin >> n;
    std::vector<std::vector<ll>> m(n, std::vector<ll>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> m[i][j];
        }
    }
    std::vector<int> a(n, (1 << 30) - 1);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n && j != i; j++){
            a[i] &= m[i][j];
            a[j] &= m[j][i];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n && j != i; j++){
            if ((a[i] | a[j]) != m[i][j]){
                std::cout << "NO" << '\n';
                return;
            }
        }
    }
    std::cout << "YES" << '\n';
    for (int i = 0; i < n; i++){
        std::cout << a[i] << " \n"[i == n - 1];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin >> testcase;
    while (testcase--){
        solve();
    }
}