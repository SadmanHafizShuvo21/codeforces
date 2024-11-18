//11 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,sum=0;
    std::cin>>n;
    std::vector<int>arr(n),pfs(n);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        sum+=arr[i];
        pfs[i]=sum;
    }
    int q;
    std::cin>>q;
    while(q--){
        int x;
        std::cin>>x;
        std::cout<<std::lower_bound(pfs.begin(),pfs.end(),x)-pfs.begin()+1<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
    return 0;
}


