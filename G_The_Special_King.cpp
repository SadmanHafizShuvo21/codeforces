//04 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    std::cout<<std::abs(a-c)+std::abs(b-d)<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


