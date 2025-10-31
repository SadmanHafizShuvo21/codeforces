#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const int N = 1e6 + 5;

std::vector<bool> isPrime(N, true);
std::vector<ll> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= N; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i <= N; i++) {
        if(isPrime[i]) primes.push_back(i);
    }
}

std::vector<ll> fact(ll n) {
    std::vector<ll> f;
    for(ll p : primes) {
        if(p * p > n) {
            break;
        }
        if(n % p == 0) {
            f.push_back(p);
            while(n % p == 0) {
                n /= p;
            }
        }
    }
    if(n > 1) {
        f.push_back(n);
    }
    return f;
}

void solve() {
    ll y, k;
    std::cin >> y >> k;
    
    auto p = fact(y);
    ll x = 1, d = std::gcd(x, y);
    
    while(k > 0) {
        if(d == y) {
            x += y * k;
            break;
        }
        
        ll yp = y / d;
        ll xp = x / d;
        ll best = inf;
        
        for(ll i : p) {
            if(yp % i == 0) {
                ll m = xp % i;
                if(m == 0) {
                    best = 0;
                    break;
                }
                best = std::min(best, i - m);
            }
        }
        
        if(best == 0) {
            d = std::gcd(x, y);
            continue;
        }
        if(best >= k) {
            x += d * k;
            break;
        }
        
        x += d * best;
        k -= best;
        d = std::gcd(x, y);
    }
    
    std::cout << x << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    sieve();
    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
