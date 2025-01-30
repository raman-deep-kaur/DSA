class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row*col; 
        vector<int> elements;
        int count = 0; 
        int srow = 0; 
        int scol = 0; 
        int erow = row-1; 
        int ecol = col-1; 
        while(count < (n)){
            //left to right 
            for(int j = scol; j<=ecol&&count<n; j++ ){
                elements.push_back(matrix[srow][j]);
                count++;
            }
            srow++;
            //up to bottom 
            for(int j = srow; j <=erow && count<n; j++ ){
                elements.push_back(matrix[j][ecol]);
                count++;    
            }
            ecol--; 
            //right to left 
            for(int j = ecol; j >=scol &&count<n; j--){
                elements.push_back(matrix[erow][j]);
                count++;      
            }
            erow--;
            //bottom to up 
            for(int j = erow; j >=srow &&count<n; j--){
                elements.push_back(matrix[j][scol]);
                count++;      
            }
            scol++;
        }
        return elements; 

    }
};
