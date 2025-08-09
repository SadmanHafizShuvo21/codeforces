#include <bits/stdc++.h>
using ll = long long;

struct Event {
    ll time;
    int type; // 0: ringing_end, 1: call_end, 2: call_initiation
    int X, Y;
    ll D;
    Event(ll t, int ty, int x, int y, ll d) : time(t), type(ty), X(x), Y(y), D(d) {}
    bool operator>(const Event& other) const {
        if (time != other.time) return time > other.time;
        return type > other.type; // For same time, process 0, then 1, then 2
    }
};

void solve() {
    int n, m;
    std::cin >> n >> m;
    // Priority queue as min-heap
    std::priority_queue<Event, std::vector<Event>, std::greater<Event>> pq;
    // Load call initiation events
    for (int i = 0; i < m; i++) {
        ll T, X, Y, D;
        std::cin >> T >> X >> Y >> D;
        pq.push(Event(T, 2, X, Y, D));
    }
    // Initialize states
    std::vector<std::string> state(n + 1, "free");
    std::vector<int> partner(n + 1, 0);
    std::vector<ll> end_time(n + 1, 0);
    std::vector<ll> duration(n + 1, 0);

    // Process events
    while (!pq.empty()) {
        Event ev = pq.top();
        pq.pop();
        ll time = ev.time;
        int type = ev.type;
        int X = ev.X;
        int Y = ev.Y;
        ll D = ev.D;

        if (type == 2) { // Call Initiation
            if (state[X] != "free") {
                int Z = partner[X];
                state[X] = "free";
                partner[X] = 0;
                if (Z != 0 && (state[Z] == "ringing" || state[Z] == "in_call") && partner[Z] == X) {
                    state[Z] = "free";
                    partner[Z] = 0;
                }
            }
            if (state[Y] == "free") {
                state[X] = "ringing";
                partner[X] = Y;
                end_time[X] = time + 10;
                duration[X] = D;
                state[Y] = "ringing";
                partner[Y] = X;
                end_time[Y] = time + 10;
                duration[Y] = D;
                std::cout << "Ring\n";
                pq.push(Event(time + 10, 0, X, Y, 0));
            } else {
                std::cout << "Busy\n";
            }
        } else if (type == 0) { // Ringing End
            if (state[X] == "ringing" && partner[X] == Y && state[Y] == "ringing" && partner[Y] == X) {
                ll D = duration[X];
                state[X] = "in_call";
                partner[X] = Y;
                end_time[X] = time + D;
                state[Y] = "in_call";
                partner[Y] = X;
                end_time[Y] = time + D;
                pq.push(Event(time + D, 1, X, Y, 0));
            } else {
                if (state[X] == "ringing" && partner[X] == Y) {
                    state[X] = "free";
                    partner[X] = 0;
                }
                if (state[Y] == "ringing" && partner[Y] == X) {
                    state[Y] = "free";
                    partner[Y] = 0;
                }
            }
        } else if (type == 1) { // Call End
            if (state[X] == "in_call" && partner[X] == Y) {
                state[X] = "free";
                partner[X] = 0;
            }
            if (state[Y] == "in_call" && partner[Y] == X) {
                state[Y] = "free";
                partner[Y] = 0;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}