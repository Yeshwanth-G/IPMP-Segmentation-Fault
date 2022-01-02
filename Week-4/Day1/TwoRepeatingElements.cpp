vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        //Approach1:Using hashing- before pushing an element into set check if its already present;======>O(n),O(n)
        // unordered_set<int>s;
        // vector<int>ans;
        // for(int i=0;i<n+2;i++){
        //     if(s.empty()||s.find(arr[i])==s.end())
        //     s.insert(arr[i]);
        //     else ans.push_back(arr[i]);
        // }
        // // Approach 2:Find sum and product,and form two equations and evaluate them;=====>O(N),O(1);
        // int N=n+2;
        // int sum=accumulate(arr,arr+N,0);
        // sum=sum-((n*(n+1))/2);
        // int product=1,fact=1;
        // for(int i=0;i<N;i++){
        //     if(i<n)
        //     fact=fact*(i+1);
        // product=product*arr[i];
            
        // }
        // product=product/fact;

        // int a=(sum+(sqrt((sum*sum)-(4*product))))/2;
        // int b=(sum-(sqrt((sum*sum)-(4*product))))/2;
        // // cout<<a<<b;
        // vector<int>ans;
        // ans.push_back(b);
        // ans.push_back(a);
        //Approach 3:FInding xor value of the two repeated elements =======>O(N),O(1)
        //and then extracting the elelemts from xor value
        //         int x=0,y=0;
        //         for(int i=0;i<n+2;i++){
        //             x=x^arr[i];
        //             if(i<n)
        //             y=y^(i+1);
        //         }
        //         x=x^y;
        //         int a=0,b=0;
        //         int set=x&~(x-1);
        //         for(int i=0;i<n+2;i++){
        //             if(arr[i]&set)
        //             a=a^arr[i];
        //             else
        //             b=b^arr[i];
        //             if(i<n){
        //             if((i+1)&set)
        //             a=a^(i+1);
        //             else
        //             b=b^(i+1);
        //             }
        //         }
        // int counta=0,countb=0;
        // for(int i=0;i<n+2;i++){
        //     if(arr[i]==a)counta++;
        //     if(arr[i]==b)countb++;
        //     if(countb==2){
        //         ans.push_back(b);
        //         ans.push_back(a);
        //     }
        //     else if(counta==2){
        //         ans.push_back(a);
        //         ans.push_back(b);
        //     }
        // }
        //         return ans;
                
        
        //     }
