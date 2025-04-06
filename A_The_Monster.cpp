// #include <bits/stdc++.h>
// using ll = long long;

// void solve() {
//     ll a, b, c, d;
//     std::cin >> a >> b >> c >> d;

//     for (int i = b; i <= 10000; i += a) {
//         if ((i - d) % c == 0 && i >= d) {
//             std::cout << i << '\n';
//             return;
//         }
//     }

//     std::cout << -1 << '\n';
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);

//     solve();
// }
#include <iostream>
#include <algorithm>

using namespace std;

int extended_gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int g = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_gcd(a, m, x, y);
    if (g != 1) {
        return -1;
    } else {
        x = (x % m + m) % m;
        return x;
    }
}

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int g = __gcd(a, c);
    if ((d - b) % g != 0) {
        cout << -1 << endl;
        return 0;
    }

    int a_prime = a / g;
    int c_prime = c / g;
    int delta = (d - b) / g;

    int inv = mod_inverse(a_prime, c_prime);
    if (inv == -1) {
        cout << -1 << endl;
        return 0;
    }

    int k0 = (delta * inv) % c_prime;
    if (k0 < 0) {
        k0 += c_prime;
    }
    k0 %= c_prime;

    int x = b + k0 * a;
    int LCM = (a * c) / g;
    int max_bd = max(b, d);

    int ans;
    if (x >= max_bd) {
        ans = x;
    } else {
        int needed = max_bd - x;
        int m = (needed + LCM - 1) / LCM;
        ans = x + m * LCM;
    }

    cout << ans << endl;

    return 0;
}