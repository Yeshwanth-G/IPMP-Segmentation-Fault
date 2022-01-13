int closestToZero(int arr[], int n)
        {
  //Approach: Sort the array and then have two pointers one at start and other at end and maintain sum of starting and ending pointers
  //if sum is positive we need try to decrease to 0 so decrease end pointer by 1,else increase start pointer by 1; and maintain minsum(answer);
  //Time:O(n),space:O(1);

            sort(arr,arr+n);
            int s=0,e=n-1,mins=INT_MAX,cursum=0;
            while(s<e){
                cursum=arr[s]+arr[e];
                if(abs(cursum)<=abs(mins)){
                    if(abs(cursum)==abs(mins)){
                        if(cursum>0)mins=cursum;
                    }
                    else
                    mins=cursum;
                }
                if(cursum<0)s++;
                else e--;
            }
            
            return mins;
        }
