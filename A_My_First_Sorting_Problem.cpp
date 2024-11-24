//10 May 2024
#include<bits/stdc++.h>

void solve(){
    int a,b;
    std::cin>>a>>b;
    if(a>b){
        std::swap(a,b);
    }
    std::cout<<a<<" "<<b<<"\n";
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