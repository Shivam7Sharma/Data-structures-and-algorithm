class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m= matrix[0].size();

        int r=0;
        int c= m-1;
        while(r<n && c<m && c>-1 && r>-1 ){
            if(matrix[r][c]==target){
                return true;
            }

            if(matrix[r][c]>target){
                c--;
            }
            else{
                r++;
            }
        }
        
        return false;
        
    }
};