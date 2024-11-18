//24 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string a;
    std::cin>>a;
    int x=std::count(a.begin(),a.end(), 'a');
    int y=std::count(a.begin(),a.end(), 'b');
    // std::cout<<x<<" "<<y<<"\n";
    if(x==y){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}