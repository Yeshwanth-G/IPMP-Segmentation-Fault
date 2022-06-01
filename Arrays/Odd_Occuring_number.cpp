int getOddOccurrence(int arr[], int n) {
    //Brute Force:
    //traverse array for each elemnt and see its occurences:Time:O(n^2) Space:O(1);
    int count=0;
    for(int i=0;i<n;i++){
    count=0;
    for(int j=i;j<n;j++){
    if(arr[j]==arr[i])
    count++;
    }
    if(count%2!=0)return arr[i];
    }
    //Approach 1:
    //will start inserting elements into hashmap if its not already present if its present will erase the existing key in hashmap
    //Time:O(N)...Space:O(n)[as finally only one element will be left]
  //can use set to optimise further.
         unordered_map<int,int>hmap;
         for(int i=0;i<n;i++){
             auto it=hmap.find(arr[i]);
             if(it!=hmap.end())
             hmap.erase(arr[i]);
             else hmap[arr[i]];
         }
         return hmap.begin()->first;
        
     }
    //Approch 2:using xor operator:5^5=0  0^6=6; so if we do xor of all elements in array the elements which occur even number number of timmes will cnacel each other and finally only the element that occurs remains;
    //Time:O(N),space:O(1);
    int a=0;
    for(int i=0;i<n;i++){
        a=a^arr[i];
    }
    return a;}
