int grid[101][101] ;//= {-1};

int getPath(int x, int y, int m, int n) {
    if (x == n || y == m)
        return 0;
    if (x == n - 1 && y == m - 1)
        return 1;
    if(grid[x][y] != -1)
        return grid[x][y];
    
    int right_move = getPath(x + 1, y, m, n);
    int down_move = getPath(x, y + 1, m, n);
    grid[x][y] = right_move + down_move;

    return grid[x][y];
}
int uniquePaths(int m, int n) {
    memset(grid,-1,sizeof(grid));
    return getPath(0, 0, m, n);
}