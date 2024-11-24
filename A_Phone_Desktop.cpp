//21 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int x,y;
    std::cin>>x>>y;
    std::cout<<std::max((y+1)/2,(x+4*y+14)/15)<<"\n";
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

