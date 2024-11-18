//12 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m,k;
    std::cin>>n>>m>>k;
    for(int i=n;i>m;i--){
        std::cout<<i<<" ";
    }
    for(int i=1;i<=m;i++){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}


