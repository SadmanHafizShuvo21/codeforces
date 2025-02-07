#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(4*n);
    for(int i=0;i<4*n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    ll area = a[0] * a.back();
    // std::cout<<area<<"\n";
    bool ok=true;
    for(int i=0;i<n;i++){
        int fi = i*2, rg =4*n-(i*2)-1;
			if (a[fi]!=a[fi+1] || a[rg] != a[rg-1] || a[fi]*1ll*a[rg] != area) {
				ok = false;
                break;
			}
    }
    
    std::cout<<(ok?"YES":"NO")<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}