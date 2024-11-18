//23 June 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n+1),b(n+1);
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
        b[i]=a[i];
    }
    std::sort(b.begin(),b.end());
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    ll m;
    std::cin>>m;
    for(int i=0;i<m;i++){
        ll type,l,r;
        std::cin>>type>>l>>r;
        if(type==1){
            std::cout<<a[r]-a[l-1]<<"\n";
        }
        else{
            std::cout<<b[r]-b[l-1]<<"\n";
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}