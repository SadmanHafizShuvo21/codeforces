#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    std::map<std::string, ll> v = {
        {"Mon", 1}, {"Tue", 2}, {"Wed", 3},
        {"Thu", 4}, {"Fri", 5}, {"Sat", 6}, {"Sun", 7}
    }; 
    std::string a, b, tf, ts;
    std::cin >> a >> tf;
    std::cin >> b >> ts;

    ll fh, fm, sh, sm;
    fh = std::stoll(tf.substr(0, 2)), fm = std::stoll(tf.substr(3, 2)), sh = std::stoll(ts.substr(0, 2)), sm = std::stoll(ts.substr(3, 2));
    // std::cout << a << " " << fh << ' ' << fm << "\n";
    // std::cout << b << " " << sh << ' ' << sm << "\n";

    ll day = (v[b]  - v[a]) * 24 * 60;
    ll min = (sh * 60 + sm) - (fh * 60 + fm);

    ll total = day + min;
    if (total <= 0) {
        total += 7 * 24 * 60;
    }

    // std::cout << total << "\n";

    ll days = total / (24 * 60);
    total %= (24 * 60);
    ll hours = total / 60;
    ll minutes = total % 60;

    std::vector<std::string> parts;
    if (days) {
        parts.push_back(std::to_string(days) + " day" + (days > 1 ? "s" : ""));
    }

    if (hours) {
        parts.push_back(std::to_string(hours) + " hour" + (hours > 1 ? "s" : ""));
    }

    if (minutes) {
        parts.push_back(std::to_string(minutes) + " minute" + (minutes > 1 ? "s" : ""));
    }

    if (parts.size() == 1) {
        std::cout << parts[0] << '\n';
    }
    else if (parts.size() == 2) {
        std::cout << parts[0] << " and " << parts[1] << '\n';
    }
    else if (parts.size() == 3) {
        std::cout << parts[0] << ", " << parts[1] << ", " << parts[2] << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}