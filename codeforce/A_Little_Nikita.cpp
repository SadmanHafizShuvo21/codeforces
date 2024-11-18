// 28 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m;
    std::cin>>n>>m;
    if(n>=m && (n-m)%2==0){
        std::cout<<"Yes"<<'\n';
    }
    else{
        std::cout<<"No"<<'\n';
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}