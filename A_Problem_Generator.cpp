//04 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m,ans=0;
    std::string s;
    std::cin>>n>>m>>s;
    for (char ch = 'A'; ch < 'H'; ++ch) {
        int lev=std::count(s.begin(), s.end(), ch);
        ans += std::max(0, m - lev);
    }
    std::cout<<ans<<'\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

