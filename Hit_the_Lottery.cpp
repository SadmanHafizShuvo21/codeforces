#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n,ans=0;
    std::cin>>n;
    int arr[]={100,20,10,5,1};
    for(int x : arr){
        if(n>=x){
            ans+=(n/x);
            n%=x;
        }
    }
    std::cout<<ans<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}