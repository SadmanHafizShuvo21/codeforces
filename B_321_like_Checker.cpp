//07 Jan 2025
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s;
    std::cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]<=s[i+1]){
            std::cout<<"No"<<"\n";
            return;
        }
    }
    std::cout<<"Yes"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}

