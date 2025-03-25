#include<bits/stdc++.h>
using ll = long long;

void solve (){
    ll n,m;
    std::cin>>n>>m;
    for(int i=0;i<25;i++){
        for(int j=0;j<25;j++){
            if(j>=i && pow(3,j)*m==pow(2,i)*n){
                // std::cout<<pow(3,j)*m<<"\n";
                std::cout<<"YES"<<"\n";
                return;
            }
        }
    }
    std::cout<<"NO"<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}