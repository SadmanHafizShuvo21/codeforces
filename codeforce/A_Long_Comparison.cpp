//23 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll x1, x2;
	ll  p1, p2;
	std::cin >> x1 >> p1 >> x2 >> p2;
	int mn = std::min(p1, p2);
	p1 -= mn;
	p2 -= mn;
	if (p1 >= 7)
		std::cout << ">" << "\n";
	else if (p2 >= 7)
		std::cout << "<" << "\n";
	else{
		for (int i = 0; i < p1; ++i) 
        x1 *= 10;
		for (int i = 0; i < p2; ++i) 
        x2 *= 10;
		if (x1 < x2)
			std::cout << "<" << "\n";
		else if (x1 > x2)
		    std::cout << ">" << "\n";
		else
			std::cout << "=" << "\n";
		}
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}