//12 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::string result;
    while(n>0) {
        if(n % 2 == 0) {
            result += 'B';
            n = (n - 2) / 2;
        } 
        else{
            result += 'A';
            n = (n - 1) / 2;
        }
    }
    std::sort(result.begin(),result.end());
    std::cout << result << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}


