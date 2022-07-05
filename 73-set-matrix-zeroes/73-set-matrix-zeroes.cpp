class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        //column variable which is initially initialized to 1
        int col0 = 1;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; i < rows; i++) 
        {
            //check if the value at any of the 0th column of any of the given row i is "0"
    //in that case the colvar=0 is false or zero
            
            if (matrix[i][0] == 0) col0 = 0;
                for (int j = 1; j < cols; j++)
                    if (matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
        }
        
        //lineraly traversing from backward in 2d matrix
        for (int i = rows - 1; i >= 0; i--) 
        {
            for (int j = cols - 1; j >= 1; j--)
                //if the value is zero at any index then set it as matrix[i][j]=0;
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
                    if (col0 == 0) 
                        matrix[i][0] = 0;
        }
    }
};