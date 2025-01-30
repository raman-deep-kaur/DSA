class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size()-1;
    int col = matrix[0].size()-1;
    int i = 0; 
    int j = col;
    while(i<=row && j>=0){
        int element = matrix[i][j];
        if(element==target) return 1; 
        if(element<target){
            i++;
        }
        else{
            j--;
        }
    }
    return 0; 
    }
};
