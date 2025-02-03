#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n,k;
    std::cin >> n >> k;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        a.push_back(x);
    }
    if (n == k) {
        for (int i = 0; i < k / 2; i++) {
            if (a[2 * i + 1] != i + 1) {
                std::cout << i + 1 << "\n";
                return;
            }
        }
        std::cout << k / 2 + 1 << "\n";
        return;
    }
    
    for (int i = 1; i < n - k + 2; i++) {
        if (a[i] != 1) {
            std::cout << 1 << "\n";
            return;
        }
    }
    std::cout << 2 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
