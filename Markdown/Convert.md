I'm unable to directly generate or upload PDF files in this chat interface, as my capabilities are text-based. However, I've prepared the full ICPC 2025 Preparation Guide content below in clean Markdown format (optimized for easy conversion). You can quickly turn this into a PDF using free tools:

### Quick PDF Creation Steps:
1. **Online Converter**: Copy the Markdown below into a site like [Markdown to PDF](https://www.markdowntopdf.com/) or [Pandoc Online](https://pandoc.org/try/). Paste, convert, and download.
2. **Local Tool**: If you have Pandoc installed (free, via `brew install pandoc` on Mac or similar), save the content as `icpc-guide.md` and run: `pandoc icpc-guide.md -o icpc-guide.pdf`.
3. **Browser**: Paste into a Markdown viewer (e.g., Dillinger.io), then print to PDF (Ctrl+P > Save as PDF).
4. **VS Code/Obsidian**: If you use these, they have built-in Markdown-to-PDF export.

The content is self-contained and ready—includes all topics, explanations, templates, and applications from our discussion. If you need adjustments (e.g., add images, change styling), let me know!

---

# ICPC 2025 Preparation Guide: Algorithms, Data Structures, and Applications

## Introduction
This document compiles all topics for ICPC 2025 online preliminary contest preparation, including core essentials and advanced topics from World Finals (2015-2024). Each topic includes:
- **Explanation**: Overview and ICPC relevance.
- **Code Template**: Basic C++ implementation (adaptable).
- **Application Areas**: Real-world and contest uses.

Topics are categorized for clarity. Use this as a study guide; practice on Codeforces/ICPC Archive.

---

## 1. Elementary Data Structures
**Explanation**: Building blocks for storage and traversal; common in simulations and basic operations.

**Code Template** (Stack for Parentheses Matching):
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    bool valid = true;
    for (char c : s) {
        if (c == '(') st.push(c);
        else if (!st.empty()) st.pop();
        else valid = false;
    }
    if (valid && st.empty()) cout << "Valid" << endl;
    else cout << "Invalid" << endl;
    return 0;
}
```

**Application Areas**: Undo in editors, expression parsing, task scheduling.

---

## 2. Advanced Data Structures
**Explanation**: For efficient queries/updates; key for large-scale problems.

**Code Template** (Union-Find):
```cpp
#include <bits/stdc++.h>
using namespace std;

int parent[100001], rankk[100001];

int find(int x) {
    if (parent[x] != x) parent[x] = find(parent[x]);
    return parent[x];
}

void union_sets(int x, int y) {
    int px = find(x), py = find(y);
    if (px != py) {
        if (rankk[px] < rankk[py]) swap(px, py);
        parent[py] = px;
        if (rankk[px] == rankk[py]) rankk[px]++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rankk[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        union_sets(x, y);
    }
    return 0;
}
```

**Fenwick Tree for Range Queries**  
**Explanation**: O(log n) prefix sums; used in dynamic counting (e.g., 2018 triangles).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;

class Fenwick {
    vector<int> tree;
    int n;
public:
    Fenwick(int _n) : n(_n), tree(_n+1, 0) {}
    void update(int idx, int val) {
        while (idx <= n) {
            tree[idx] += val;
            idx += idx & -idx;
        }
    }
    int query(int idx) {
        int sum = 0;
        while (idx > 0) {
            sum += tree[idx];
            idx -= idx & -idx;
        }
        return sum;
    }
};

int main() {
    int n; cin >> n;
    Fenwick ft(n);
    return 0;
}
```
**Application Areas**: Image processing ranges, election vote tallies, stock prefix max.

**Mergeable Heaps**  
**Explanation**: Merging priority queues; for tree DP (e.g., 2019 Hobson's Trains).  
**Code Template**: (Simplified; use std::priority_queue base)
```cpp
// Full impl: Custom binomial heap.
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Merge pq1 and pq2 into new.
    return 0;
}
```
**Application Areas**: Compression (Huffman), multi-source shortest paths.

**Application Areas (General)**: Social graphs, image segmentation, logistics MST.

---

## 3. Sorting and Searching
**Explanation**: Efficient ordering and lookups; binary search variants common.

**Code Template** (Binary Search):
```cpp
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    cout << binary_search(arr, target) << endl;
    return 0;
}
```

**Radix Sort (Doubling for Strings)**  
**Explanation**: String suffix sorting; for ranking (e.g., 2019 royal ladies).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
void radix_sort(vector<int>& arr) {
    int max_val = *max_element(arr.begin(), arr.end());
    vector<vector<int>> buckets(10);
    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        for (int num : arr) buckets[(num / exp) % 10].push_back(num);
        int idx = 0;
        for (auto& b : buckets) { for (int x : b) arr[idx++] = x; b.clear(); }
    }
}
int main() {
    vector<int> arr = {170, 45, 75, 90};
    radix_sort(arr);
    for (int x : arr) cout << x << " ";
    return 0;
}
```
**Application Areas**: Genome sorting, dictionary LCP.

**Ternary Search on Convex Functions**  
**Explanation**: Unimodal optimization; for geometry costs (e.g., 2015 Asteroids).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
double ternary_search(double l, double r, auto f) {
    for (int it = 0; it < 100; ++it) {
        double m1 = l + (r - l) / 3, m2 = r - (r - l) / 3;
        if (f(m1) < f(m2)) r = m2; else l = m1;
    }
    return f(l);
}
int main() {
    auto f = [](double x) { return (x - 1) * (x - 1); };
    cout << fixed << setprecision(6) << ternary_search(0, 2, f) << endl;
    return 0;
}
```
**Application Areas**: ML tuning, physics beam optimization.

**Application Areas (General)**: SQL queries, user recommendations, pattern matching.

---

## 4. String Manipulation
**Explanation**: Text processing; hashing, patterns in palindromes/anagrams.

**Code Template** (KMP Pattern Matching):
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> computeLPS(const string& pat) {
    int m = pat.size();
    vector<int> lps(m, 0);
    int len = 0;
    for (int i = 1; i < m; i++) {
        while (len > 0 && pat[i] != pat[len]) len = lps[len - 1];
        if (pat[i] == pat[len]) len++;
        lps[i] = len;
    }
    return lps;
}

void kmpSearch(const string& txt, const string& pat) {
    vector<int> lps = computeLPS(pat);
    int n = txt.size(), m = pat.size();
    int i = 0, j = 0;
    while (i < n) {
        if (pat[j] == txt[i]) { i++; j++; }
        if (j == m) {
            cout << "Found at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < n && pat[j] != txt[i]) {
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
}

int main() {
    string txt, pat;
    cin >> txt >> pat;
    kmpSearch(txt, pat);
    return 0;
}
```

**Suffix Structures (Tries with Aho-Corasick)**  
**Explanation**: Longest suffix matches; string ranking.  
**Code Template** (Basic Trie):
```cpp
#include <bits/stdc++.h>
using namespace std;
struct TrieNode { map<char, TrieNode*> child; bool end = false; };
TrieNode* root = new TrieNode();
void insert(string s) {
    TrieNode* cur = root;
    for (char c : s) {
        if (!cur->child[c]) cur->child[c] = new TrieNode();
        cur = cur->child[c];
    }
    cur->end = true;
}
int main() {
    insert("hello");
    return 0;
}
```
**Application Areas**: Autocomplete, DNA motifs.

**Cyclic String Matching**  
**Explanation**: Rotation equivalence; permutations (e.g., 2022 Zoo).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
bool cyclic_equal(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    s1 += s1;
    return s1.find(s2) != string::npos;
}
int main() {
    cout << (cyclic_equal("abc", "cab") ? "Yes" : "No") << endl;
    return 0;
}
```
**Application Areas**: Periodic signals, necklace design.

**Application Areas (General)**: Search engines, plagiarism, DNA alignment.

---

## 5. Dynamic Programming (DP)
**Explanation**: Subproblem optimization; knapsack, LCS staples.

**Code Template** (0/1 Knapsack):
```cpp
#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> wt(n), val(n);
    for (int i = 0; i < n; i++) cin >> wt[i];
    for (int i = 0; i < n; i++) cin >> val[i];
    cout << knapsack(W, wt, val, n) << endl;
    return 0;
}
```

**Convex Hull Optimization (CHT)**  
**Explanation**: Convex costs in DP; tree merging (e.g., 2018 Conquer).  
**Code Template** (Basic Deque):
```cpp
#include <bits/stdc++.h>
using namespace std;
struct Line { long long m, b; long long eval(long long x) { return m * x + b; } };
deque<Line> hull;
void insert(Line l) { /* Maintain hull */ }
long long query(long long x) { /* Best eval */ return 0; }
int main() { return 0; }
```
**Application Areas**: Supply chains, matrix multiplication.

**Memoization on Configuration**  
**Explanation**: State DP for simulations (e.g., 2019 Karel).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
map<pair<int, int>, int> memo;
int dp(int pos, int step) {
    auto key = make_pair(pos, step);
    if (memo.count(key)) return memo[key];
    if (step == 0) return pos;
    return memo[key] = /* transitions */;
}
int main() {
    cout << dp(0, 5) << endl;
    return 0;
}
```
**Application Areas**: Chess engines, robot paths.

**Application Areas (General)**: Project management, game AI, cryptography.

---

## 6. Backtracking
**Explanation**: Pruning search trees; for permutations, N-Queens.

**Code Template** (N-Queens):
```cpp
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<int>& pos) {
    for (int prev = 0; prev < row; prev++) {
        if (pos[prev] == col || abs(pos[prev] - col) == (row - prev)) return false;
    }
    return true;
}

bool solveNQueens(int row, int n, vector<int>& pos) {
    if (row == n) return true;
    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, pos)) {
            pos[row] = col;
            if (solveNQueens(row + 1, n, pos)) return true;
            pos[row] = -1;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> pos(n, -1);
    if (solveNQueens(0, n, pos)) {
        for (int p : pos) cout << p << " ";
        cout << endl;
    } else cout << "No solution" << endl;
    return 0;
}
```

**Iterative Construction**  
**Explanation**: Incremental build with backtrack (e.g., 2019 Checks board).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
bool backtrack(vector<int>& board, int pos) {
    if (pos == board.size()) return true;
    for (int val = 0; val < 9; ++val) {
        if (/* safe */) {
            board[pos] = val;
            if (backtrack(board, pos + 1)) return true;
        }
    }
    return false;
}
int main() { return 0; }
```
**Application Areas**: Sudoku, scheduling constraints.

**Application Areas (General)**: Puzzle solvers, AI planning, key generation.

---

## 7. Greedy Algorithms
**Explanation**: Local optima for global; scheduling, fractional knapsack.

**Code Template** (Activity Selection):
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> activities(n); // {end, start}
    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        activities[i] = {e, s};
    }
    sort(activities.begin(), activities.end());
    int count = 0, last_end = -1;
    for (auto& act : activities) {
        if (act.second >= last_end) {
            count++;
            last_end = act.first;
        }
    }
    cout << count << endl;
    return 0;
}
```

**Greedy with Exchange**  
**Explanation**: Swap proofs for optimality (e.g., 2016 Balanced Diet).  
**Code Template**: (Extends sorting)
```cpp
sort(activities.begin(), activities.end(), [](auto a, auto b) { return a.end < b.end; });
```
**Application Areas**: Register allocation, deadline jobs.

**Application Areas (General)**: OS scheduling, compression, routing.

---

## 8. Graph Algorithms
**Explanation**: Traversals, paths; BFS/DFS, Dijkstra core.

**Code Template** (Dijkstra):
```cpp
#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, int> pii;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pii>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
    }
    vector<long long> dist(n + 1, LLONG_MAX);
    dist[1] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, 1});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;
        for (auto [w, v] : graph[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++) cout << dist[i] << " ";
    cout << endl;
    return 0;
}
```

**Bridge Finding**  
**Explanation**: Critical edges; components (e.g., 2015 Tours).  
**Code Template** (Tarjan):
```cpp
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis; vector<int> disc, low;
int time = 0;
void dfs(int u, int par) {
    vis[u] = true; disc[u] = low[u] = time++;
    for (int v : adj[u]) {
        if (v == par) continue;
        if (!vis[v]) { dfs(v, u); low[u] = min(low[u], low[v]); }
        else low[u] = min(low[u], disc[v]);
        if (low[v] > disc[u]) // Bridge
    }
}
int main() { return 0; }
```
**Application Areas**: Network security, road repairs.

**k-th Ancestor**  
**Explanation**: Tree queries; binary lifting (e.g., 2019 Trains).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> up; int LOG = 20;
void preprocess(int n, vector<vector<int>>& adj, int root) {
    // DFS fill
    for (int j = 1; j < LOG; ++j)
        for (int i = 0; i < n; ++i)
            if (up[j-1][i] != -1) up[j][i] = up[j-1][ up[j-1][i] ];
}
int get_kth(int v, int k) {
    for (int j = 0; j < LOG; ++j) if (k & (1 << j)) v = up[j][v];
    return v;
}
int main() { return 0; }
```
**Application Areas**: Genealogy, file systems.

**Transitive Closure**  
**Explanation**: Reachability; graphs (e.g., 2017 Chamber).  
**Code Template** (Floyd-Warshall):
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<bool>> reach(n, vector<bool>(n, false));
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (reach[i][k] && reach[k][j]) reach[i][j] = true;
    return 0;
}
```
**Application Areas**: Influence networks, build dependencies.

**Application Areas (General)**: GPS, social analysis, web crawling.

---

## 9. Basic Mathematics
**Explanation**: Arithmetic, mods; counting paths.

**Code Template** (Modular Exponentiation):
```cpp
#include <bits/stdc++.h>
using namespace std;

long long mod_pow(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main() {
    long long base, exp, mod;
    cin >> base >> exp >> mod;
    cout << mod_pow(base, exp, mod) << endl;
    return 0;
}
```

**Inclusion-Exclusion**  
**Explanation**: Union counts; overlaps (e.g., 2017 Tarot).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
// Alternate sum intersections
int main() { return 0; }
```
**Application Areas**: Database sets, derangements.

**Chinese Remainder Theorem**  
**Explanation**: Modular systems; cycles (e.g., 2023 permutations).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
long long crt(vector<long long> a, vector<long long> m) {
    long long prod = 1, res = 0;
    for (long long mi : m) prod *= mi;
    for (int i = 0; i < a.size(); ++i) {
        long long p = prod / m[i];
        res = (res + a[i] * p * mod_inverse(p, m[i])) % prod;
    }
    return res;
}
long long mod_inverse(long long a, long long m) { /* Euclid */ return 0; }
int main() { return 0; }
```
**Application Areas**: Clocks, RSA.

**Application Areas (General)**: Finance probabilities, logistics combos.

---

## 10. Geometrical Algorithms
**Explanation**: Points, polygons; convex hull, intersections.

**Code Template** (Graham Scan Convex Hull):
```cpp
#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0) ? 1 : 2;
}

vector<Point> convexHull(vector<Point>& points) {
    int n = points.size();
    if (n < 3) return points;
    vector<Point> hull;
    sort(points.begin(), points.end(), [](Point a, Point b) {
        return a.y < b.y || (a.y == b.y && a.x < b.x);
    });
    Point pivot = points[0];
    sort(points.begin() + 1, points.end(), [pivot](Point a, Point b) {
        int o = orientation(pivot, a, b);
        if (o == 0) return (a.x - pivot.x) * (a.x - pivot.x) + (a.y - pivot.y) * (a.y - pivot.y) <
                       (b.x - pivot.x) * (b.x - pivot.x) + (b.y - pivot.y) * (b.y - pivot.y);
        return o == 2;
    });
    for (Point p : points) {
        while (hull.size() >= 2 && orientation(hull[hull.size() - 2], hull.back(), p) != 2) hull.pop_back();
        hull.push_back(p);
    }
    return hull;
}

int main() {
    int n;
    cin >> n;
    vector<Point> points(n);
    for (int i = 0; i < n; i++) cin >> points[i].x >> points[i].y;
    vector<Point> hull = convexHull(points);
    for (auto& p : hull) cout << p.x << " " << p.y << endl;
    return 0;
}
```

**Sweep Line**  
**Explanation**: Event processing; overlaps (e.g., 2016 Rivers).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
struct Event { double x; int type; };
bool cmp(Event a, Event b) { return a.x < b.x || (a.x == b.x && a.type < b.type); }
int main() {
    vector<Event> events;
    sort(events.begin(), events.end(), cmp);
    int active = 0;
    for (auto e : events) { if (e.type == 1) ++active; else --active; }
    return 0;
}
```
**Application Areas**: CAD, robotics motion.

**Voronoi Diagrams**  
**Explanation**: Space partitions; farthest points (e.g., 2018 Panda).  
**Code Template**: (Use lib placeholder)
```cpp
int main() { /* Voronoi compute */ return 0; }
```
**Application Areas**: Cell towers, terrain.

**3D Geometry**  
**Explanation**: Volumes, rotations (e.g., 2022 Dice).  
**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
struct Vec3 { double x,y,z; };
Vec3 rotate(Vec3 v, Vec3 axis, double theta) {
    double c = cos(theta), s = sin(theta);
    // Rodrigues
    return { /* ... */ };
}
int main() { return 0; }
```
**Application Areas**: 3D printing, molecules.

**Application Areas (General)**: Game collisions, robotics paths, GIS.

---

## 11. Network Flow Algorithms
**Explanation**: Max flow; matching problems.

**Code Template** (Edmonds-Karp):
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, s = 1, t;
    cin >> n >> m >> t;
    vector<vector<long long>> cap(n + 1, vector<long long>(n + 1, 0));
    for (int i = 0; i < m; i++) {
        int u, v;
        long long c;
        cin >> u >> v >> c;
        cap[u][v] = c;
    }
    vector<int> parent(n + 1);
    long long max_flow = 0;
    while (true) {
        fill(parent.begin(), parent.end(), -1);
        queue<int> q;
        q.push(s);
        parent[s] = -2;
        long long min_cap = 0;
        while (!q.empty() && parent[t] == -1) {
            int u = q.front(); q.pop();
            for (int v = 1; v <= n; v++) {
                if (parent[v] == -1 && cap[u][v] > 0) {
                    q.push(v);
                    parent[v] = u;
                    if (v == t) break;
                }
            }
        }
        if (parent[t] == -1) break;
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            min_cap = min(min_cap, cap[u][v]);
            cap[u][v] -= min_cap;
            cap[v][u] += min_cap;
        }
        max_flow += min_cap;
    }
    cout << max_flow << endl;
    return 0;
}
```

**Mixed Commodity Flows**  
**Explanation**: Typed flows; decompose (e.g., 2017 Pipe).  
**Code Template**: (Extend max flow)
```cpp
int main() { /* Layers for types */ return 0; }
```
**Application Areas**: Pipelines, traffic types.

**Application Areas (General)**: Cargo flow, job matching, circuits.

---

## 12. Advanced Topics (Bit, Randomized, etc.)
**Explanation**: Edge cases; bits for speed, rand for probs.

**Code Template** (Bit Subset Sum):
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    bool possible = false;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) sum += arr[i];
        }
        if (sum == target) { possible = true; break; }
    }
    cout << (possible ? "Yes" : "No") << endl;
    return 0;
}
```

**Linear Algebra over Finite Fields**  
**Explanation**: Matrix ops mod p; detection (e.g., 2022 Sphinx).  
**Code Template** (Gaussian mod p):
```cpp
#include <bits/stdc++.h>
using namespace std;
void gauss(vector<vector<int>>& A, int mod) {
    int n = A.size();
    for (int col = 0; col < n; ++col) {
        int piv = col;
        for (int i = col; i < n; ++i) if (A[i][col]) { piv = i; break; }
        swap(A[col], A[piv]);
        for (int i = col + 1; i < n; ++i) {
            int fac = (A[i][col] * mod_inverse(A[col][col], mod)) % mod;
            for (int j = col; j < n; ++j) A[i][j] = (A[i][j] - fac * A[col][j] + mod * mod) % mod;
        }
    }
}
int main() { return 0; }
```
**Application Areas**: Error codes, verification.

**Application Areas (General)**: DB indexing, Monte Carlo finance, tree queries.

---

## 13. Probability and Expected Value
**Explanation**: Expectations in randomness; games/dice (e.g., 2018/2022 dice).

**Code Template** (Simulation):
```cpp
#include <bits/stdc++.h>
using namespace std;
double expect(auto trans) { // Markov
    return 0.0;
}
int main() {
    cout << (1.0/6 * (1+2+3+4+5+6)) << endl;
    return 0;
}
```

**Application Areas**: Finance risks, game equilibria.

---

## 14. Interactive Problems
**Explanation**: Query-based; adversaries (e.g., 2022 Sphinx).

**Code Template**:
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "? " << x << endl;
    int res; cin >> res;
    cout << "! " << ans << endl;
    return 0;
}
```

**Application Areas**: Online algos, black-box opt.

---

## 15. Combinatorics and Counting
**Explanation**: Bounds counting; strings/posets (e.g., 2023 Sperner).

**Code Template** (Binomial):
```cpp
#include <bits/stdc++.h>
using namespace std;
long long binom(int n, int k, int mod) {
    if (k > n) return 0;
    long long res = 1;
    for (int i = 1; i <= k; ++i) res = res * (n - i + 1) % mod * mod_inverse(i, mod) % mod;
    return res;
}
int main() { return 0; }
```

**Application Areas**: Voting theorems, antichains.

---

## Preparation Tips
- Practice 50-100 problems/topic on Codeforces (800-1400 rating).
- Focus: Fundamentals for prelims, geometry/prob for finals.
- Resources: ICPC Archive, USACO Guide.

---

If this doesn't meet your needs or you want a LaTeX version for better formatting (e.g., with syntax highlighting), just ask!