//Linear Search
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,item;
    std::cin>>n>>item;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    bool ok=false;
    for(int i=0;i<n;i++){
        if(a[i]==item){
            ok=true;
            break;
        }
    }
    if(ok){
        std::cout<<"Item is found in Array"<<"\n";
    }
    else{
        std::cout<<"Item is not found in Array"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}