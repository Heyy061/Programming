// class Solution {
// public:
// // convert 3d array to 2d array
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n = matrix.size();
//         int m = matrix[0].size(); //m=no of row , n= no of col

//         int st = 0;
//         int end = (m * n) - 1; 
     
//         while(st<=end){
//             int mid = st + (end - st) / 2;
  
//             int row = mid / m;// these will convert 3d to 2D 
//             int col = mid % m;

//             if (matrix[row][col] == target) {
//                 return true;
//             }
//             if (matrix[row][col] > target) {
//                 end = mid - 1;
//             }
//             if (matrix[row][col] < target) {
//                 st = mid + 1;
//             }
//        }
//        return false;
//     }
// };
////////////////////////////////////////////
// we can solve this q like first applying binary search in column and try to find the potential row and again apply binary search in that row

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Binary search to find the potential row
        int st = 0;
        int end = m - 1;
        int row = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target >= matrix[mid][0] && target <= matrix[mid][n - 1]) {
                row = mid;
                break;
            }

            if (target < matrix[mid][0]) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        // No possible row
        if (row == -1) {
            return false;
        }

        // Binary search inside the selected row
        st = 0;
        end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (matrix[row][mid] == target) {
                return true;
            }

            if (target > matrix[row][mid]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }
};