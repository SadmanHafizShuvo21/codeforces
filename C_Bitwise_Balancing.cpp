#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll b,c,d;
    std::cin>>b>>c>>d;
    ll a = b^d;
    if((a|d)-(c&a)==d){
        std::cout<<a<<"\n";
    }
    else{
        std::cout <<-1<< "\n";
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
