int MissingNumber(vector<int>& array, int n) {
        // Approach 1:find sum of all array elements and subract it from n*(n+1)/2
        // int x=accumulate(array.begin(),array.end(),0);
        // int sum=(n*(n+1))/2;
        // return sum-x;
        //Approach 2:find xor of all array elements and extract missing value;
        // int x=0,y=0;
        // for(int i=0;i<n-1;i++){
        //     x=x^array[i];
        //     y=y^(i+1);
        // }
        // y=y^n;
        // return x^y;
    }
