vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int top=0,btm=matrix.size()-1,lft=0,rht=matrix[0].size()-1;
        int d=0;
        vector<int>ans;
        while(top<=btm&&lft<=rht){
            if(d==0){
                for(int i=lft;i<=rht;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(d==1){
                for(int i=top;i<=btm;i++){
                    ans.push_back(matrix[i][rht]);
                }
                rht--;
            }
            else if(d==2){
                for(int i=rht;i>=lft;i--){
                    ans.push_back(matrix[btm][i]);
                }
                btm--;
            }
            else if(d==3){
                for(int i=btm;i>=top;i--){
                    ans.push_back(matrix[i][lft]);
                }
                lft++;
            }
            d=(d+1)%4;
        }
        return ans;
    }
