#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::string s;
    std::cin>>n>>s;
    ll len = std::count(s.begin(),s.end(),'1');

    if(len==4*std::sqrt(n)-4){
        std::cout<<"Yes"<<"\n";
    }
    else{
        std::cout<<"No"<<'\n';
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
