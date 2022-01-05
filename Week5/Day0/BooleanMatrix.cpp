//Approach 1:Mataining a track of rows and cols that needs to be made 1 using two auxilary arrays and then traversing again and modifiying the corresponding rows;
//Time:O(n*m),space:O(m+n)
void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int R=matrix.size();
        int C=matrix[0].size();
        vector<int>row(R,0),col(C,0);
        for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(matrix[i][j]==1){
                row[i]=1;
                col[j]=1;
            }   
        }
        }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(row[i]==1||col[j]==1)
                matrix[i][j]=1;
            }
        }
    
}
//Approach 2:Instead of using extra arrays we will first traverse and find out state of first row and column and then use first row 
//and first column as auxilary matrices for columns and rows respectively.==>O(m*n),O(1);
void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int R=matrix.size();
        int C=matrix[0].size(),rowf=0,colf=0;
        for(int i=0;i<C;i++){
        if(matrix[0][i]==1){rowf=1;
            break;
        }
        }
        for(int i=0;i<R;i++){
        if(matrix[i][0]==1)
        {
            colf=1;
            break;
        }
        }
        for(int i=1;i<R;i++){
            for(int j=1;j<C;j++){
                if(matrix[i][j]==1){
                    matrix[0][j]=1;
                    matrix[i][0]=1;
                }
            }
        }
        for(int i=1;i<R;i++){
            for(int j=1;j<C;j++){
                if(matrix[i][0]==1||matrix[0][j]==1)
                matrix[i][j]=1;
            }
        }
        for(int i=0;i<R;i++){
            
                if(colf==1)matrix[i][0]=1;
        }
        for(int j=0;j<C;j++){
        if(rowf==1)matrix[0][j]=1;
        }
    
}
