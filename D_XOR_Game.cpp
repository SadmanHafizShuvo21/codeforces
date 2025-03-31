#include<bits/stdc++.h>
using ll = long long;

void solve (){
    ll a,b;
    std::cin>>a>>b;
    std::cout<<(((a^b)==a+b)?"No":"Yes")<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;
    while(t--)
    solve();
}