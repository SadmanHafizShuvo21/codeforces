#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n,m,ans=0,len=0;
    std::cin>>n>>m;
    while(n--){
        std::string s;
        std::cin>>s;
        len+=s.size();
        if(len<=m){
            ans++;
        }
    }
    std::cout<<ans<<"\n";
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
