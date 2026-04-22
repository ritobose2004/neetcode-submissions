class Solution {
   public:
    bool search(vector<vector<int>>& matrix, int target, int row) {
        int m = matrix[0].size();
        int i = 0;
        int j = m - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (target == matrix[row][mid]) {
                return true;
            } else if (target > matrix[row][mid]) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix[i].size(); j++) {
        //         if (matrix[i][j] == target) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
        int m = matrix.size();
        int n = matrix[0].size();
        int sr = 0;
        int er = m - 1;
        while (sr <= er) {
            int midR = sr + (er - sr) / 2;
            if (target >= matrix[midR][0] && target <= matrix[midR][n - 1]) {
                return search(matrix, target, midR);
            } else if (target > matrix[midR][n - 1]) {
                sr = midR + 1;
            } else {
                er = midR - 1;
            }
        }
        return false;
    }
};
