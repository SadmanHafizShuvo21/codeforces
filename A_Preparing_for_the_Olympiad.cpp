//23 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>b[i];
    }
    ll ans=a[n-1];
    for(int i=0;i<n-1;i++){
        if(a[i]>b[i+1]){
            ans+=a[i]-b[i+1];
        }
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}




