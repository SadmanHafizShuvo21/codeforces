//10 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    bool flag=false;
    for(int i=0;i<8;i++){
        std::string s;
        std::cin>>s;
        int ans=std::count(s.begin(), s.end(), 'R');
        // std::cout<<ans<<" \n"[i==7];
        if(ans==8){
            flag=true;
        }
    }
    if(flag){
        std::cout<<"R"<<'\n';
    }
    else{
        std::cout<<"B"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


