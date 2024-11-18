//29 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::string a,b;
    std::cin>>a>>b;
    bool ok=true;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            break;
        }
        if(b[i]=='1'){
            ok=false;
            break;
        }
    }
    if(ok){
        std::cout<<"YES"<<'\n';
    }
    else{
        std::cout<<"NO"<<'\n';
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


