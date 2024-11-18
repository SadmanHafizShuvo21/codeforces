//13 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m,k;
    std::cin>>n>>m>>k;
    int posi=-1,dis=0,cnw=0;
    std::string s;
    std::cin>>s;
    s+='L';
    bool ok=true;
    for(int i=0;i<=n;i++){
        if (s[i] == 'L'){
            posi = i;
            dis = 0;
        }
        else if (s[i] == 'C'){
            dis++;
            if (i - posi >= m){
                ok=false;
                break;
            }
        }
        else if (s[i] == 'W'){
            dis++;
            if (dis >= m){
                cnw++;
                if (cnw > k){
                    ok=false;
                    break;
                }
            }
        }
    }
    if(ok){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
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


