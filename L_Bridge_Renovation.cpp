#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = ((n * 2 + 2) / 3) + (n + 1) / 2;
    if(n%3==2 && (n%2==1)){
        ans--;
    }
    std::cout << ans << '\n';

    return 0;
}
