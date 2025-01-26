#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s,s1;
    std::cin>>s>>s1;
    std::swap(s[0],s1[0]);
    std::cout<<s<<" "<<s1<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

