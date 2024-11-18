//22 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll a,b;
    std::cin>>a>>b;
    ll dif=a-b;
    if(dif>=18){
        std::cout<<"RCB"<<"\n";
    }
    else{
        std::cout<<"CSK"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

