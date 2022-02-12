bool subArrayExists(int arr[], int n)
    {
//Approach:Iterate the array and store the sums in a hashmap 
//and if any sum repeates that means the sum of all the elements between them is 0;
//Time:O(n),space:O(1);
unordered_map<int,int>hmap;
        int cursum=0;
        for(int i=0;i<n;i++){
            cursum=cursum+arr[i];
            if(hmap.empty()||hmap.find(cursum)==hmap.end()&&cursum!=0){
                hmap[cursum];
            }
            else{
                return true;
            }
        }
        return false;
}
