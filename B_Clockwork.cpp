#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<=2*std::max(i,n-i-1)){
            std::cout<<"NO"<<"\n";
            return;
        }
    }
    std::cout<<"YES"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

