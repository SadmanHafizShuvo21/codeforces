#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Point {
    ll x, y;
};

ll compute_area(ll min_x, ll max_x, ll min_y, ll max_y) {
    return (max_x - min_x + 1) * (max_y - min_y + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Point> points(n);
        vector<ll> x(n), y(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].x >> points[i].y;
            x[i] = points[i].x;
            y[i] = points[i].y;
        }
        
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        
        vector<ll> sorted_x = x;
        vector<ll> sorted_y = y;
        sort(sorted_x.begin(), sorted_x.end());
        sort(sorted_y.begin(), sorted_y.end());
        
        ll global_min_x = sorted_x[0];
        ll global_max_x = sorted_x.back();
        ll global_min_y = sorted_y[0];
        ll global_max_y = sorted_y.back();
        
        auto count_min_x = upper_bound(sorted_x.begin(), sorted_x.end(), global_min_x) - lower_bound(sorted_x.begin(), sorted_x.end(), global_min_x);
        auto count_max_x = upper_bound(sorted_x.begin(), sorted_x.end(), global_max_x) - lower_bound(sorted_x.begin(), sorted_x.end(), global_max_x);
        auto count_min_y = upper_bound(sorted_y.begin(), sorted_y.end(), global_min_y) - lower_bound(sorted_y.begin(), sorted_y.end(), global_min_y);
        auto count_max_y = upper_bound(sorted_y.begin(), sorted_y.end(), global_max_y) - lower_bound(sorted_y.begin(), sorted_y.end(), global_max_y);
        
        ll original_area = compute_area(global_min_x, global_max_x, global_min_y, global_max_y);
        ll min_area = original_area;
        
        for (const auto& p : points) {
            ll x_val = p.x;
            ll y_val = p.y;
            
            ll new_min_x, new_max_x, new_min_y, new_max_y;
            
            // Compute new_min_x
            if (x_val == global_min_x) {
                if (count_min_x > 1) {
                    new_min_x = global_min_x;
                } else {
                    new_min_x = sorted_x[1];
                }
            } else {
                new_min_x = global_min_x;
            }
            
            // Compute new_max_x
            if (x_val == global_max_x) {
                if (count_max_x > 1) {
                    new_max_x = global_max_x;
                } else {
                    new_max_x = sorted_x[sorted_x.size() - 2];
                }
            } else {
                new_max_x = global_max_x;
            }
            
            // Compute new_min_y
            if (y_val == global_min_y) {
                if (count_min_y > 1) {
                    new_min_y = global_min_y;
                } else {
                    new_min_y = sorted_y[1];
                }
            } else {
                new_min_y = global_min_y;
            }
            
            // Compute new_max_y
            if (y_val == global_max_y) {
                if (count_max_y > 1) {
                    new_max_y = global_max_y;
                } else {
                    new_max_y = sorted_y[sorted_y.size() - 2];
                }
            } else {
                new_max_y = global_max_y;
            }
            
            ll a = compute_area(new_min_x, new_max_x, new_min_y, new_max_y);
            ll other_count = n - 1;
            
            ll current_area;
            if (a > other_count) {
                current_area = a;
            } else {
                ll option1 = (new_max_x - new_min_x + 2) * (new_max_y - new_min_y + 1);
                ll option2 = (new_max_x - new_min_x + 1) * (new_max_y - new_min_y + 2);
                current_area = min(option1, option2);
            }
            
            if (current_area < min_area) {
                min_area = current_area;
            }
        }
        
        cout << min(original_area, min_area) << '\n';
    }
    
    return 0;
}