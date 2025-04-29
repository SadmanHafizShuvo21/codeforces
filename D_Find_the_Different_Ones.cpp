#include <bits/stdc++.h>
using ll = long long;
std::vector<int> is_prime, primes;

void sieve(int n) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    primes.clear();
    
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}


void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<int> nxt(n);
    nxt[n - 1] = n;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] == a[i+1]) {
            nxt[i] = nxt[i+1];
        }
        else{
            nxt[i] = i+1;
        }
    }

    ll q;   
    std::cin >> q;
    while (q--) {
        ll l, r;
        std::cin >> l >> r;
        l--;
        if (nxt[l] >= r) {
            std::cout << "-1 -1" << "\n";
        }
        else {
            std::cout << l+1 << ' ' <<  nxt[l] + 1<< '\n';
        }
    }  
    std::cout << "\n"; 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
}