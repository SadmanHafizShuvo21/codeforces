#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,m;
    std::cin>>n>>m;
    
    std::vector<ll>a(n),b(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i]>>b[i];
    }
    ll perimeter = 4*m;
    for(int i=1;i<n;i++){
        perimeter+=(2*(a[i]+b[i]));
    }
    std::cout<<perimeter<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

