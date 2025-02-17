#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>v(n),cnt(n+1);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
        v[i]--;
        cnt[v[i]]++;
    }
    int l=0,r=0,len=0;
    for(int i=0;i<n;i++){
        if(cnt[v[i]]>1){
            len=0;
        }
        else{
            len++;
        }
        if(len>r-l){
            r=i+1;
            l=i+1-len;
        }
    }
    if(l==r){
        std::cout<<0<<"\n";
    }
    else{
        std::cout<<l+1<<" "<<r<<"\n";
    }
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
