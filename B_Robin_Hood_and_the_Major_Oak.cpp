//22 September 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k,Robin;
    std::cin>>n>>k;
    Robin=k*(n+n+k-1)/2;
    
    Robin%2?std::cout<<"NO\n":std::cout<<"YES\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}

