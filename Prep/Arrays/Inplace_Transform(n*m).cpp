void solve(){
  //pick the largest square matrix and transpose it inplace...
  //now check and place the remaining elements.
    int n,m;
    cin>>n>>m;
    int v[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int x=min(n,m);
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i<j)swap(v[i][j],v[j][i]);
        }
    }
    if(n!=m){
        if(x==m){
            for(int i=x;i<n;i++){
                for(int j=0;j<m;j++){
                    v[j][i]=v[i][j];
                }
            }
        }else{
            for(int i=0;i<n;i++){
                for(int j=x;j<m;j++){
                    v[j][i]=v[i][j];
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
