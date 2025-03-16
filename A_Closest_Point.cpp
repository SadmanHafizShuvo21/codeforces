#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n; 
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }  
    if(n==2 && a[1]-a[0]>1){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}