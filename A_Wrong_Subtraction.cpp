//22 June 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k;
    std::cin>>n>>k;
    
    for(int i=1;i<=k;i++){
        if(n%10==0){
            n/=10;
        }
        else{
            n-=1;
        }
    }
    std::cout<<n<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}