#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string T,P;
    std::cin>>T>>P;   //aaaaaabbbj ab
    int S=T.length();
    int R=P.length();
    bool ok=false;
    int index,count=0;
    for(int i=0;i<S-R;i++){
        if(T.substr(i,R)==P){
            ok=true;
            index=i;
            break;
        }
    }
    if(ok){
        std::cout<<"Pattern Matching found"<<" at "<<index+1 <<'\n';
    }
    else{
       std::cout<<"Pattern Matching not found"<<'\n'; 
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
//       if(i + R <= S && T.substr(i, R) == P){
//           ok=true;
//           index=i;
//           break;
//       }