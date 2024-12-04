//04 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    ll sum = 0, ans=0;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        sum+=x;
        ll step = sqrt(sum);
        if(step*step==sum && sum%2==1){
            ans++;
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

