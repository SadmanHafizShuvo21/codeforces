#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,sum=0,cnta=0,cntb=0;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(a[i]==100){
            cnta++;
        }
        else{
            cntb++;
        }
        sum+=a[i];
    }
    if(sum%200!=0){
        std::cout<<"NO"<<"\n";
    }
    else{
        if(cntb%2==0 && cnta%2==0){
            std::cout<<"YES"<<"\n";
        }
        else if(cnta%2==0 && cntb%2!=0 && cnta>0){
            std::cout<<"YES"<<"\n";
        }
        else{
            std::cout<<"NO"<<"\n";
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}