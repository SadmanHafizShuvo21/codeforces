//26 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
const int mod = 1e9+7;
void solve(){
    ll n,res=1,fact=1;
    std::cin>>n;

	for(ll i = 1;i < n;i++){
		res *= 2;
		fact *= i;
		fact %= mod;
		res %= mod;
	}
	fact *= n;
	fact %= mod;
	fact -= res;
	fact %= mod;
	if(fact < 0){
        fact += mod;
    }
	std::cout << fact << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}


