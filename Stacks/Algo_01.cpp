#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);
	
    int len = stack.size();
    std::cout<<"Stack size = "<<len<<"\n";
    std::cout<<"Stack print top to bottom: "<<"\n";
	while (!stack.empty()) {
		std::cout << stack.top() <<" ";
		stack.pop();
	}
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}