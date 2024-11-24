//22 June 2024
#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n,k;
    std::cin>>n>>k;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    ll ans=0,cnt=0;
    if(k==0){
        ans=a[0]-1;
    }
    else{
        ans=a[k-1];
    }
    for(int i=0;i<n;i++){
        if(a[i]<=ans){
            cnt++;
        }
    }
    if (cnt != k || !(1 <= ans && ans <= 10e9)) {
		ans=-1;
	}
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}