//Approach 1:go to each index i and make a[i] as visited if its not visited before,else the element at that index is repeated so ptint it;
//here for making it visited we make the element -ve(visited) if its poistive(unvisited)
//But in this method if element is included for more than 2 times then that would always get printed eg:{2,2,2,2} output would be 2 2 2; 
vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])]<0){
                v.push_back(abs(arr[i]));
            }
            else arr[abs(arr[i])]=-arr[abs(arr[i])];
        }
        if(v.empty())v.push_back(-1);
        sort(v.begin(),v.end());
        return v;
    }

//Approach 2:For each index i increase a[i] by n;
//then again traverse and check if element is greater than 2*n if its gerater then that means its increased more than two times by n 
//which means that its index i has occured more than two times so i will be a repeated elemnt,so print it;
//==>O(N),O(1).....
vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++){
            arr[arr[i]%n]=arr[arr[i]%n]+n;
        }
        for(int i=0;i<n;i++){
        if(arr[i]>=2*n)
        v.push_back(i);
        }
        if(v.empty())v.push_back(-1);
        sort(v.begin(),v.end());
        return v;
    }
    
