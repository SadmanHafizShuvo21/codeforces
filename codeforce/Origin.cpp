//19 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,sum=0;
    std::cin>>n;
    ll mal=n/9;
    ll rem=n%9;
    sum=(mal*45)+rem*(rem+1)/2;
    std::cout<<sum<<"\n";
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