//27 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<int> a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    // std::sort(a.begin(),a.end());

    for(int i=0;i<n-1;i++){
        ll x=a[i];
        ll y=a[i+1];
        if(x>y){
            std::swap(x,y);
        }
        if(2*x>y){
            std::cout<<"YES"<<"\n";
            return;
        }
    }
    std::cout<<"NO"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

