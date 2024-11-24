//20 June 2024
#include<bits/stdc++.h>
using ll = long long;

int sgn(int x){
    if(x>0){
        return 1;
    }
    else{
        return -1;
    }
}

void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        ll cur=a[i];
        int j=i;
        while(j<n && sgn(a[i]) == sgn(a[j])){
            cur=std::max(cur,a[j]);
            ++j;
        }
        sum+=cur;
        i=j-1;   
    }
    std::cout<<sum<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
    return 0;
}