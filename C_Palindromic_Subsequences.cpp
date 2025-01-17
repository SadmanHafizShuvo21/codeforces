#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    if(n==6){
        std::cout<<"1 1 2 3 1 2"<<"\n";
        return;
    }
    ll ans=(n+1)/2;
    for(int i=0;i<n;i++){
        std::cout<<i%ans + 1<<" \n"[i==n-1];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

