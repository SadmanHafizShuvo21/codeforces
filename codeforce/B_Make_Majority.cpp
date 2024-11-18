//16 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            one++;
        }
        if(s[i]=='0' && (i==0 || s[i-1]=='1')){
            zero++;
        }
    }
   if(one>zero){
       std::cout<<"Yes"<<"\n";
    }
   else{
       std::cout<<"No"<<"\n";
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


