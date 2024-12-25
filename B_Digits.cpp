//25 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,d;
    std::cin>>n>>d;
    std::vector<int>v;
    v.push_back(1);
    if(d%3==0 || n>=3){
        v.push_back(3);
    }
    if(d==5){
        v.push_back(5);
    }
    if(d==7 || n>=3){
        v.push_back(7);
    }

    if(d % 9 == 0){
        v.push_back(9);
    } 
    else if(d % 3 == 0) {
        if(n >= 3){
            v.push_back(9);
        } 
    }
    else{
        if(n >= 6){
            v.push_back(9);
        } 
    }

    for(int i : v){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}




