//19 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int x,y;
    std::cin>>x>>y;
    while(y--){
        if(x<1000){
            x+=1000;
        }
        else{
            x*=2;
        }
    }
    std::cout<<x<<"\n";
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