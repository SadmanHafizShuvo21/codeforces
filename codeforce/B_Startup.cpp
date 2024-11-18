//08 November 2024
#include<bits/stdc++.h>

void solve() {
    int n, k;
    std::cin >> n >> k;
    n = std::min(n, k);
    
    std::vector<int> s(k);
    for (int i = 0; i < k; i++) {
        int b, c;
        std::cin >> b >> c;
        b--;
        s[b] += c;
    }
    std::sort(s.begin(), s.end(), std::greater());
    
    int ans = std::accumulate(s.begin(), s.begin() + n, 0);
    std::cout << ans << "\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}