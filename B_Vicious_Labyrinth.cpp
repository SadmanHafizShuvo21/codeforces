#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    if(k%2==0){
        for(int i=1;i<=n;i++){
            if(i==n-1){
                std::cout<<n<<" ";
            }
            else{
                std::cout<<n-1<<" ";
            }
        }
    }
    else{
        for(int i=1;i<=n;i++){
            if(i==n){
                std::cout<<n-1<<" ";
            }
            else{
                std::cout<<n<<" ";
            }
        }
    }
    std::cout<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}