// Given a square n x n matrix of integers matrix, rotate it by 90 degrees clockwise.

// You must rotate the matrix in-place. Do not allocate another 2D matrix and do the rotation.

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            for (int i = 0; i < matrix.size()-1; i++){
                for (int j = i+1; j < matrix.size(); j++){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
            for (int i = 0; i < matrix.size(); i++){
                for (int j = 0; j < matrix.size()/2; j++){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][matrix.size()-1-j];
                    matrix[i][matrix.size()-1-j] = temp;
                }
            }
        }
    };
    