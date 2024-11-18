//Two largest number in arrays
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    int first=a[0],second=a[1];
    
    for(int i=2;i<n;i++){
        if(a[i]>first){
            std::swap(a[i],first);
            std::swap(a[i],second);
        }
        else if(a[i]>second){
            std::swap(a[i],second);
        }
    }
    std::cout<<first<<" "<<second<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}