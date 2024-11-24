//03 Sep 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll a,b;
    std::cin>>a>>b;
    std::cout<<std::abs(a-b)<<"\n";
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