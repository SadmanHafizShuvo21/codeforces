#include<bits/stdc++.h>
using ll = long long;
// int main(){
// int t;
// string s;
// map<string,int> reg;
// cin>>t;
// for(int i=1;i<=t;i++){
//       cin>>s;
//         if(reg[s]==0){
//         reg[s]=1;
//         cout<<"OK"<<endl;
//         }
//         else{
//         cout<<s<<reg[s]<<endl;
//         reg[s]++;
//        }
//     }
// }
void solve(){
    int n;
    std::cin>>n;
    std::string s;
    std::map<std::string,int>reg;
    for(int i=0;i<n;i++){
        std::cin>>s;
        if(reg[s]==0){
            std::cout<<"OK"<<'\n';
        }
        else{
            std::cout<<s<<reg[s]<<'\n';
        }
        reg[s]++;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}