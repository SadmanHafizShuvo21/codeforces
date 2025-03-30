#include <bits/stdc++.h>
using ll = long long;

void solve(){
    std::string s;
    std::cin>>s;
    ll n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            std::cout<<s.substr(i,2)<<"\n";
            return;
        }
    }
    for(int i=0;i<n-2;i++){
        if(s[i]!=s[i+2]){
            std::cout<<s.substr(i,3)<<"\n";
            return;
        }
    }
    std::cout<<-1<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
