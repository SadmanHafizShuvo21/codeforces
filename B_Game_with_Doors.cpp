#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int l1,l2,r1,r2;
    std::cin>>l1>>r1>>l2>>r2; 
    ll l = std::max(l1,l2);
    ll r = std::min(r1,r2);
    std::cout<<r-l+(l1!=l2)+(r1!=r2)<<"\n";  
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