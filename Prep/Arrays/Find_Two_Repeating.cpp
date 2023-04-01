//given n+2 elements in range 1-N find two repeating ones.
//sort and find-O(nlogn),O(1)
vector<int> twoRepeated (int arr[], int n) {
       //3 O(n),O(1) approaches;
       int xr=0;
       for(int i=0;i<n+2;i++){
           xr=(xr^arr[i]);
           if(i<n){
               xr=(xr^(i+1));
           }
       }
       int sb=(xr&(-xr));
       int y=0;
       for(int i=0;i<n+2;i++){
           if(arr[i]&sb)
           y=(y^arr[i]);
           if(i<n){
               if((i+1)&sb)
               y=(y^(i+1));
           }
       }
       int n1=y;
      int n2=(y^xr);
    //   if(n1<n2)return {n1,n2};
    //   return {n2,n1};
------------------------------------------------------------

    double sm=0,p=1,fact=(1);
    for(int i=0;i<n+2;i++){
        sm+=arr[i];
        p*=arr[i];
        if(i<n){
            p=(p/(i+1));
            sm-=(i+1);
        }
    }
    int s=sm,pr=(int)p;
    n1=(s+(sqrt(s*s-4*pr)))/2;
    n2=(s-(sqrt(s*s-4*pr)))/2;
    bool b1=true,b2=true;
//----------------------------------------------------------
    
    n1=-1;
    n2=-1;
    for(int i=0;i<n+2;i++){
        if(arr[abs(arr[i])]>0)arr[abs(arr[i])]*=-1;
        else{
            if(n1==-1)n1=abs(arr[i]);
            else n2=abs(arr[i]);
        }
    }
    // cout<<n1<<" "<<n2<<endl;
    for(int i=0;i<n+2;i++){
        if(abs(arr[i])==n1){
            if(b1)b1=(!b1);
            else
            return {n1,n2};
            
        }
        else if(abs(arr[i])==n2){
            if(b2)b2=(!b2);
            else
            return {n2,n1};
            
        }
    }
    return {n2,n1};
    //lead to overflow
    
    }
