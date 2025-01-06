#include<bits/stdc++.h>
using ll = long long;

int dx[] = {0, 0, 1, -1};  
int dy[] = {1, -1, 0, 0};

int dfs(std::vector<std::string>& grid, int x, int y, std::vector<std::vector<bool>>& visited, int W, int H) {
    std::stack<std::pair<int, int>> s;
    s.push({x, y});
    visited[x][y] = true;
    int count = 1;  
    
    while (!s.empty()) {
        int cx = s.top().first, cy = s.top().second;
        s.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i], ny = cy + dy[i];
            
            if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && grid[nx][ny] == '.') {
                visited[nx][ny] = true;
                s.push({nx, ny});
                count++;
            }
        }
    }
    
    return count;
}

ll solve() {
    int W, H;  
    std::cin >> W >> H;
    
    std::vector<std::string> grid(H);
    std::pair<int, int> prince_pos;  
    
    for (int i = 0; i < H; i++) {
        std::cin >> grid[i];
        size_t pos = grid[i].find('@');
        if (pos != std::string::npos) {
            prince_pos = {i, static_cast<int>(pos)};
        }
    }
    
    std::vector<std::vector<bool>> visited(H, std::vector<bool>(W, false));
    
    int x = prince_pos.first, y = prince_pos.second;
    grid[x][y] = '.';
    
    int result = dfs(grid, x, y, visited, W, H);
    return result;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    for(int i=1;i<=t;i++){
        int res = solve();
        std::cout << "Case " << i << ": " << res << "\n";
    }
    return 0;
}
