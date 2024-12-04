//26 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int a,b;
    std::cin>>a>>b;
    ll len=std::sqrt(2*(a+b));
    ll sum=len*(len+1)/2;
    if(sum>a+b){
        len--;
    }
    std::cout<<len<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

