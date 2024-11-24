//22 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll a,b;
    std::cin>>a>>b;
    if(a>b){
        std::swap(a,b);
    }
    std::cout<<b%3<<"\n";
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

