//11 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>v,v1;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        if(x%2==0){
            v.push_back(x);
        }
        else{
            v1.push_back(x);
        }
    }
    for(int i=0;i<v1.size();i++){
        std::cout<<v1[i]<<" ";
    }
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<"\n";
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