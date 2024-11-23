#include<bits/stdc++.h>

void solve(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            if(std::abs(a[i]-a[i+1])>1){
               std::cout<<"NO"<<"\n";
               return;
            }
        std::swap(a[i],a[i+1]);
        }
    }
    std::cout<<"YES"<<'\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}