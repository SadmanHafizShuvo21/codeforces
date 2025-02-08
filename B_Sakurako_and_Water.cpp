#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::map<int, int> mn; 

    for(int i = 0; i < n; i++) {
        std::vector<int> a(n);
        for(int j = 0; j < n; j++) {
            std::cin >> a[j];
            int dif = i - j;
            if (mn.find(dif) == mn.end()) {
                mn[dif] = a[j];
            } 
            else{
                mn[dif] = std::min(mn[dif], a[j]);
            }
        }
    }

    int ans = 0;
    for(auto& [key, value] : mn) {
        if (value < 0) {
            ans -= value; 
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}