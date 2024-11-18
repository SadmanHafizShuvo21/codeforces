//12 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,x,sum=0;
    std::cin>>n>>x;
    for(int i=0;i<n;i++){
        int fav;
        std::cin>>fav;
        if(fav<=x)
        sum+=fav;
    }
    ll totalSum = (long long)x * (x + 1) / 2;
    std::cout << totalSum-2*sum <<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}


