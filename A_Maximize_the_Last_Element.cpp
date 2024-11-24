//30 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        if(i%2==0){
            v.push_back(a);
        }
    }
    std::sort(v.begin(),v.end());
    std::cout<<v[v.size()-1]<<'\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}


