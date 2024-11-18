//12 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s;
    std::cin>>s;
    int ans=1;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i - 1] != s[i]) {
            ans++;
        }
    }
    if (ans == 1) {
        std::cout << ans << '\n';
    } 
    else if (ans > 2) {
        std::cout << ans - 1 << '\n';
    } 
    else {
        if (s[0] == '1') {
            std::cout << ans << '\n';
        } 
        else {
            std::cout << ans - 1 << '\n';
        }
    }
    
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}