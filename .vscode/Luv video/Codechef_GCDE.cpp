//07 July 2024 
#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n,q;
    std::cin >> n >> q;
    int a[n+10];
    int f[n+10],b[n+10];
    f[0]=b[n+1]=0;
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        f[i]=std::gcd(f[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){
        b[i]=std::gcd(b[i+1],a[i]);
    }
    while(q--){
        int l,r;
        std::cin>>l>>r;
        std::cout<<std::gcd(f[l-1],b[r+1])<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}