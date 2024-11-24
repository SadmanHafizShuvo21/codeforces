#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    
    int ans = 0;
    for (int d = 0; d < std::min(n, m) / 2; d++) {
        std::string t;
        for (int i = d; i < m - d - 1; i++) {
            t += s[d][i];
        }
        for (int i = d; i < n - d - 1; i++) {
            t += s[i][m - 1 - d];
        }
        for (int i = m - d - 1; i > d; i--) {
            t += s[n - 1 - d][i];
        }
        for (int i = n - d - 1; i > d; i--) {
            t += s[i][d];
        }
        t += t;
        for (int j = 0; j < t.size() / 2; j++) {
            ans += (t.substr(j, 4) == "1543");
        }
    }
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--){
        solve();
    }
}