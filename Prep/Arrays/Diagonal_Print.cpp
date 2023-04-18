vector<int> downwardDiagonal(int n, vector<vector<int>> A)
	{
		int i=0,j=0,temp=0;
		vector<int>v;
		while(i<n&&j<n){
		    int p=i,q=j;    
		    while(q>=0&&p>=0&&p<n&&q<n){
		        v.push_back(A[p][q]);
		        p++;
		        q--;
		    }
		    j++;
		    if(j>=n){
		        j=n-1;
		        temp++;
		    }
		    i=temp;
		}
		return v;
	}//single inside loop approach******
