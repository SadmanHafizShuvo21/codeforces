//24 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    int ans=n/2;
    if(n%2==0){
        std::cout<<ans<<"\n";
    }
    else{
        std::cout<<ans+1<<"\n";
    }

}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}