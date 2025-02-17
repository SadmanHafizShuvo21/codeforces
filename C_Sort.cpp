#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, q;
    std::cin >> n >> q;
    
    std::vector<std::vector<int>> pre1(n + 1, std::vector<int>(26)), pre2(n + 1, std::vector<int>(26));

    for (int i = 1; i <= n; i++) {
        char c; 
        std::cin >> c;
        pre1[i] = pre1[i - 1]; 
        pre1[i][c - 'a']++;
    }
    for (int i = 1; i <= n; i++) {
        char c; 
        std::cin >> c;
        pre2[i] = pre2[i - 1]; 
        pre2[i][c - 'a']++;
    }

    while (q--) {
        int l, r, dif = 0;
        std::cin >> l >> r;
        for (int c = 0; c < 26; c++){
            dif += abs(pre1[r][c] - pre1[l - 1][c] - (pre2[r][c] - pre2[l - 1][c]));
        }     
        std::cout << dif / 2 << "\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
