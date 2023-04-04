 vector<int> spirallyTraverse(vector<vector<int> > matrix, int n, int m) 
    {
       int t=0,b=n-1,l=0,r=m-1;
       int d=0;
       vector<int>ans;
       while(t<=b&&l<=r){
           if(d==0){
               for(int i=l;i<=r;i++){
                   ans.push_back(matrix[t][i]);
               }
               t++;
           }else if(d==1){
               for(int i=t;i<=b;i++){
                   ans.push_back(matrix[i][r]);
               }
               r--;
           }else if(d==2){
               for(int i=r;i>=l;i--){
                   ans.push_back(matrix[b][i]);
               }
               b--;
           }else{
               for(int i=b;i>=t;i--){
                   ans.push_back(matrix[i][l]);
               }
               l++;
           }
           d=(d+1)%4;
       }
       return ans;
    }
