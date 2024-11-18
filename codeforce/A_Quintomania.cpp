//08 November 2024
#include<bits/stdc++.h>

void solve(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int x = std::abs(a[i]-a[i+1]);
        //std::cout<<x<<" ";
        if(x!=5 && x!=7){
            std::cout<<"NO"<<"\n";
            return;
        }
    }
    std::cout<<"YES"<<'\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--){
        solve();
    }
}