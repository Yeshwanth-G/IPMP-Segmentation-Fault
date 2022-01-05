void binSort(int a[], int n)
    {
        //Approach 1:have a count of 0's znd ones and then traverse and modify array acoringly;
        //Time:O(n),space:O(1);
    int count0=0,count1=0;
    for(int i=0;i<n;i++){
        if(!a[i])count0++;
        
    }    
    for(int i=0;i<n;i++){
        if(i<count0)a[i]=0;
        else a[i]=1;
    }
       //Approach 2:Two pointer approach:
       //have two pointers one at start and other at end,the if start points to 1 
       //then look for(decrease untill we find 0)end pointer to point 0,..so that we can swap them;
       //Time:O(n),space-O(1)
    //   int i=0,j=N-1;
    //   while(i<j){
    //       if(a[i]==0){
    //           i++;
    //       }
    //       if(a[i]==1){
    //           if(a[j]==0){
    //               swap(a[i],a[j]);
    //               i++;j--;
    //           }
    //           else{
    //               j--;
    //           }
    //       }
    //   }
    }
