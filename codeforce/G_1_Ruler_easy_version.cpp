//09 Aug 2024
#include <bits/stdc++.h>
using ll = long long;


void solve() {
	int l = 2, r = 1000;
	while (l < r) {
		int mid = l + (r - l) / 2;
		std::cout << "? 1 " << mid << "\n";
		int resp; 
        std::cin >> resp;
		
		if (resp == mid) {
			l = mid + 1;
		} 
		else {
			r = mid;
		}
	}
	std::cout << "! " << l <<"\n";	
}
 

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}