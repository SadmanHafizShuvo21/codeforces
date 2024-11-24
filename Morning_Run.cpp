//19 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int x,y;
    std::cin>>x>>y;
    int ans=2*(x+y);
    if(ans>=1000){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}