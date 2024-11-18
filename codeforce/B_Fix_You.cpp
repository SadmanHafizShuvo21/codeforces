//26 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m,ans=0;
    std::cin>>n>>m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			char o;
            std::cin >> o;
			if(o == 'C'){
                continue;
            }
			if(i + 1 == n and o == 'D'){
                ans++;
            }
			if(j + 1 == m and o == 'R'){
                ans++;
            }
		}
	}
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


