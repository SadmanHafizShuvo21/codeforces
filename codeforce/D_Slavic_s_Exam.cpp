//07 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve(){
    std::string a,b;
    std::cin>>a>>b;
    int j=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='?'){
            if(j<b.size()){
                a[i]=b[j];
                j++;
            }
            else{
                a[i]='a';
            }
        }
        else if(j < b.size() && a[i] == b[j]){
            j++;
        }
        
    }
    if (j == b.size()) {
        std::cout <<"YES"<<"\n";
        std::cout << a << "\n";
    } 
    else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}
