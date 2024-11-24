//14 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k;
    std::cin>>n>>k;
    if(n%2 && k%2==0){
        std::cout<<"NO"<<"\n";
    }
    else{
        std::cout<<"YES"<<"\n";
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