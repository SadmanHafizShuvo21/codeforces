// 28 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>v;
    while(n!=0){
        if(n%2==0){
            v.push_back(0);
        }
        else if(n%4==1){
            v.push_back(1);
            n--;
        }
        else{
            v.push_back(-1);
            n++;
        }
        n/=2;
    }
    std::cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" \n"[i==v.size()-1];
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