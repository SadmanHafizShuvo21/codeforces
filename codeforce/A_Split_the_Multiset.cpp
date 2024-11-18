//16 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n>>k;
    std::cout<<(n-1+k-2)/(k-1)<<"\n";
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


