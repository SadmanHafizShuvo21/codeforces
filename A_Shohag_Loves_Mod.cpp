//24 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,i=1;
    std::cin>>n;
    while(n--){
        std::cout<<i<<" ";
        i+=2;
    }
    std::cout<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}



