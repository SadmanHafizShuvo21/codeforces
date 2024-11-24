//28 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int k=0;k<(1<<n);k++){
        ll sum=0;
        for(int i=0;i<n;i++){
            if(k & (1<<i)){
                sum+=a[i];
            }
            else{
                sum-=a[i];
            }
        }
        if(sum%360==0){
            std::cout<<"YES"<<"\n";
            return;
        }
    }
    std::cout<<"NO"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}


