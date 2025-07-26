#include<bits/stdc++.h>
using ll = unsigned long long;
std::vector<bool> prime(1e5 + 7, true);
std::vector<ll> tpow(31);

ll countDivisor(ll n) {
    ll sq = std::sqrt(n);
    ll cnt = 0;
    for(int i = 1; i <= sq; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
 
    ll ans = 2 * cnt - (sq * sq == n);
    return ans;
}

void sieve(int n) {
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1; 
}

ll extended_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll g = extended_gcd(b, a % b, y, x);
    y -= a / b * x;
    return g;
}

void solve() {
    ll x, m;
    std::cin >> x >> m ;

    ll cnt = 0;
    ll n = std::__lg(x);
    n = std::pow(2, n);
    for(int i = 1; i <= std::min(n, m); i++) {
        ll temp = x ^ i;
        if (temp != 0 && (x % temp == 0 || i % temp == 0)) {
            cnt++;
        } 
    }

    ll u, v;

    ll g = extended_gcd(n, x, u, v);
    for (int y = 0; y < n; y++) {
        ll z = x ^ y;
        ll r = m / n + (y < m % n) - 1;
        if (r <= 0) {
            continue;
        }
        
        if (z % g != 0) {
            continue;
        }
        ll m = x / g;
        ll u0 = u * (-z / g) % m;
        if (u0 < 0) {
            u0 += m;
        }
        r++;
        cnt += r / m;
        cnt += (u0 < r % m);
        if (u0 == 0) {
            cnt--;
        }
    }
    
    std::cout << cnt + 1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}