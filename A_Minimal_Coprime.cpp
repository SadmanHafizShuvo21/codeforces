#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,r;
    std::cin>>n>>r;
    if(r==1 && n==1){
        std::cout<<1<<"\n";
    }
    else{
        std::cout<<r-n<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
