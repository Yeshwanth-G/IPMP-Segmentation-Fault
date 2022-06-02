//Approach 1:take all quadraples and find sum-O(n^4),O(1)
bool find4Numbers(int v[], int n, int X)  
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int b=k+1;b<n;b++){
                    if(v[i]+v[j]+v[k]+v[b]==X)return true;
                }
            }
        }
    }
    return false;
}
------------------------------------------------------------------
//Approach 2:fix two numbers and apply two for other two-O(n^3),O(1)
bool find4Numbers(int v[], int n, int X)  
{
    sort(v,v+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int target=X-v[i]-v[j];
            int s=j+1;
            int e=n-1;
            while(s<e){
                if(v[s]+v[e]==target)return true;
                if(v[s]+v[e]<target)s++;
                else e--;
            }
        }
    }
    return false;
}
---------------------------------------------------------------------
 //Approach 3:store all possible pairs sum in a array and then apply two sum on that array.
 //since array stores all possible pair sum its size is O(N^2)
 //so sorting it will take O(n^2logn) time:time=O(n^2logn),O(N^2)space
 //suppose we got an anser as {arr[1]+arr[2]},{arr[2]+arr[3]} here these cannot form 4 distinct numbers-handle this explicity.
bool diff(pair<int,pair<int,int>>p1,pair<int,pair<int,int>>p2){
    if(p1.second.first==p2.second.first||p1.second.first==p2.second.second)return false;
    if(p1.second.second==p2.second.first||p1.second.second==p2.second.second)return false;
    return true;
}
bool find4Numbers(int v[], int n, int X)  
{
    
    vector<pair<int,pair<int,int>>>temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            temp.push_back(make_pair(v[i]+v[j],make_pair(i,j)));
        }
    }
    sort(temp.begin(),temp.end());
    int s=0,e=temp.size()-1;
    while(s<e){
        int x=temp[s].first+temp[e].first;
        if(X==x&&diff(temp[s],temp[e]))return true;
        if(x<X)s++;
        else e--;
    }
    
    return false;
}
---------------------------------------------------------------------------------
 //instead of storing all pairs sum in array and sorting,sotre in a hashmap
 //now for every pair find if X-pairsum exists in hashmap.
 //O(N^2),O(N^2)
bool diff(pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first||p1.first==p2.second)return false;
    if(p1.second==p2.first||p1.second==p2.second)return false;
    return true;
}
bool find4Numbers(int v[], int n, int X)  
{
    unordered_map<int,pair<int,int>>hmap;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int vl=v[i]+v[j];
            hmap[vl]={i,j};
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int vl=v[i]+v[j];
            if(hmap.find(X-vl)!=hmap.end())
            if(diff(make_pair(i,j),hmap[X-vl]))return true;
        }
    }
    return false;
}
