#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::vector<int> numbers;
    int num;
    while (true) {
        std::cin >> num;
        numbers.push_back(num);
        if (num == 0) {
            break;
        }
    }

    for (int i = numbers.size() - 1; i >= 0; i--) {
        std::cout << numbers[i] << "\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}