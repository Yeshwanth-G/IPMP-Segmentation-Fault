class Solution {
public:
    void print(vector<vector<int>>&m,vector<int>&v,int s,int a,int b){
        if(a<0||b<0)return;
        for(int i=s;i<=b;i++){
            if(m[s][i]!=1000)
            v.push_back(m[s][i]);
        m[s][i]=1000;}
        for(int i=1;i<=a;i++){
            if(m[i][b]!=1000)
            v.push_back(m[i][b]);
            m[i][b]=1000;
        }
        for(int i=b-1;i>=s;i--){
            if(m[a][i]!=1000)
            v.push_back(m[a][i]);
            m[a][i]=1000;
        }
        for(int i=a-1;i>s;i--){
            if(m[i][s]!=1000)
            v.push_back(m[i][s]);
            m[i][s]=1000;
        }
        print(m,v,s+1,a-1,b-1);
    }
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int>v;
        int top=0,down=m.size()-1,left=0,right=m[0].size()-1,d=0;
        while(top<=down&&left<=right){
            if(d==0){
                for(int i=left;i<=right;i++){
                    v.push_back(m[top][i]);
                }
                top++;}
             else if(d==1){
                 for(int i=top;i<=down;i++){
                     v.push_back(m[i][right]);
                 }
                 right--;
             }
            else if(d==2){
                for(int i=right;i>=left;i--){
                    v.push_back(m[down][i]);
                }
                down--;
            }
            else{
                for(int i= down;i>=top;i--){
                    v.push_back(m[i][left]);
                }
                left++;
            }
            d=(d+1)%4;
            }
        
        return v;}
    
};
