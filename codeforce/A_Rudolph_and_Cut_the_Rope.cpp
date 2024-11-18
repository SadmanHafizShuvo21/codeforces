//17 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,cnt=0;
    std::cin>>n;
    for (int i = 0; i < n; i++){
        int a,b;
        std::cin>>a>>b;
        if(a>b)
            cnt++;
    }
    std::cout<<cnt<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


