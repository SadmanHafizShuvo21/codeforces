//04 Dec 2024
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
    ll maxCost=-1E9;
    for(int i=0;i<n;i++){
        ll sum=a[i]+b[i];
        for(int j=0;j<n;j++){
            if(i!=j){
                sum+=std::max(a[j],b[j]);
            }
        }
        maxCost=std::max(sum,maxCost);
    }
    std::cout<<maxCost<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

