#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n; 
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::vector<std::array<ll,2>>arr;

    for(int i=2;i<n;i++){
        if(a[i]==0){
            arr.push_back({2,n});
            n=3;
            break;
        }
    }
    if(a[0]==0 || a[1]==0){
        arr.push_back({0,2});
        n--;
    }
    arr.push_back({0,n});
    std::cout<<arr.size()<<"\n";

    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i][0]+1<<" "<<arr[i][1]<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll t;
    std::cin>>t;
    while(t--)
    solve();
}
