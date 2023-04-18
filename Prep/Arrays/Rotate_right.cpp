vector<vector<int>> rotate_right(int n,int m,vector<vector<int>>&mat){
    vector<vector<int>>p(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            p[j][m-1-i]=mat[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
-------------------------------------------------------------
  //transpose reverse rows....***********
  vector<vector<int>> rotate_right(int n,int m,vector<vector<int>>&mat){
    vector<vector<int>>p(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            p[j][i]=mat[i][j];
        }//transpose
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j<(n-1-j))
            swap(p[i][j],p[i][n-j-1]);
        }//reverse elements in a particular row
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
