#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n,m;
    std::cin>>n>>m;
    std::vector<std::string>grid(n);
    for(int i=0;i<n;i++){
        std::cin>>grid[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1'){
                bool row=true;
                for(int k=0;k<j;k++){
                    if(grid[i][k]!='1'){
                        row=false;
                        break;
                    }
                }
                bool col=true;
                for(int k=0;k<i;k++){
                    if(grid[k][j]!='1'){
                        col=false;
                        break;
                    }
                }
                if(!row && !col){
                    std::cout<<"NO"<<"\n";
                    return;
                }
            }
        }
    }
    std::cout<<"YES"<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}



