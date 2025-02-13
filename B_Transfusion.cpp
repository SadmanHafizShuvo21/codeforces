#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    ll odd=0,even=0;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(i%2==1){
            odd+=a[i];
        }
        else{
            even+=a[i];
        }
    }
    ll odc = n/2, evc = n/2;
    if (n%2==1){
        evc++;
    } 

    if (odd%odc!=0 || even%evc!=0 || odd/odc!=even/evc) {
        std::cout<<"NO"<<"\n";
        return;
    }
    std::cout<<"YES"<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
