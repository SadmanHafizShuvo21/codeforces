#include<bits/stdc++.h>

void solve(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<std::lcm(a,b)<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}