class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int srow = 0; 
        int scol = 0; 
        int erow = n - 1; 
        int ecol = n - 1; 
        int loop = n/2;
 
        while(loop--){
            for(int i = 0; i < n-1 ; i++){
                int temp = matrix[srow][scol+i];
                matrix[srow][scol+i] = matrix[erow-i][scol];
                matrix[erow-i][scol] = matrix[erow][ecol-i];
                matrix[erow][ecol-i] = matrix[srow+i][ecol];
                matrix[srow+i][ecol] = temp;
            }
            n = n - 2;
            srow++;
            scol++;
            erow--;
            ecol--;
        } 
    }
};
