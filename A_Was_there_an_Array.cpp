#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n-2);
    for(int i=0;i<n-2;i++){
        std::cin>>a[i];
    }
    bool ok=true;
    for(int i=0;i<n-4;i++){
        if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
            ok=false;
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
    while (t--) {
        solve();
    }
}
