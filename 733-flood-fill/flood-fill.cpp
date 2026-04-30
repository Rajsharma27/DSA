class Solution {
public:
    void dfs(vector<vector<int>>& image, int initialcolor, int newcolor, int i, int j) {
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size()) {
            return;
        }
        if (image[i][j] != initialcolor) {
            return;
        }

        image[i][j] = newcolor;

        dfs(image, initialcolor, newcolor, i + 1, j);
        dfs(image, initialcolor, newcolor, i, j + 1);
        dfs(image, initialcolor, newcolor, i - 1, j);
        dfs(image, initialcolor, newcolor, i, j - 1);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialcolor = image[sr][sc];
        if (initialcolor != color) {
            dfs(image, initialcolor, color, sr, sc);
        }
        return image;
    }
};