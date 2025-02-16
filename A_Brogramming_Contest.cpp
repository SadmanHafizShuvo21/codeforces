#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s;
    std::cin>>n>>s;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            ans++;
        }
    }
    if(s[0]=='1'){
        ans++;
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
