#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int sum_x = 0, sum_y = 0, count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char cell;
                cin >> cell;
                if (cell == '#') {
                    sum_x += i;
                    sum_y += j;
                    ++count;
                }
            }
        }

        int center_x = sum_x / count;
        int center_y = sum_y / count;
        cout << center_x + 1 << " " << center_y + 1 << "\n";
    }

    return 0;
}



