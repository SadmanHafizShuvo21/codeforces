//09 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m;
    std::cin>>n>>m;
    std::vector<int>row(n),col(m);
    for(int i=0;i<n;i++){
        std::string s;
        std::cin>>s;
        for(int j=0;j<m;j++){
            row[i]+=s[j]-'0';
            col[j]+=s[j]-'0';
        }
    }
    for(int i=0;i<n;i++){
        std::string s;
        std::cin>>s;
        for(int j=0;j<m;j++){
            row[i]-=s[j]-'0';
            col[j]-=s[j]-'0';
        }
    }

    bool flag=true;
    for(int i=0;i<n;i++){
        if(row[i]%3!=0){
            flag=false;
        }
    }
    for(int j=0;j<m;j++){
        if(col[j]%3!=0){
            flag=false;
        }
    }

    if(flag){
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
}


