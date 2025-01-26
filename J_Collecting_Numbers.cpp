#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> pos(n + 1); 
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        pos[x] = i;
    }
    // for(int i=1;i<=n;i++){
    //     std::cout<<pos[i]+1<<" \n"[i==n];
    // }
    int rounds = 1; 
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) { 
            rounds++;
        }
    }
    std::cout << rounds << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
