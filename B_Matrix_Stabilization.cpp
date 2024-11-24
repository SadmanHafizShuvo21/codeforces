//24 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void solve(){
    int n,m;
    std::cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int max=0;
            for(int k=0;k<4;k++){
                int x=dx[k]+i;
                int y=dy[k]+j;
                if(x>=0 && x<n && y>=0 && y<m){
                    max=std::max(max,a[x][y]);
                }
            }
            a[i][j]=std::min(max,a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cout<<a[i][j]<<" \n"[j==m-1];
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

