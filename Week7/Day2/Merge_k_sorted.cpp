class Solution
{
  //Create a min heap priority queue and insert first column elements in k arrays the keep popping elements and insert the element in from array that is next to popped elelment;
  //O(n*k*logk)
    public:
    vector<int> mergeKArrays(vector<vector<int> > &A,int k) {
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>p;
    int n=k;
    vector<int>v;
    for(int i=0;i<k;i++){
        vector<int>v={A[i][0],i,0};
        p.push(v);
    }//klogk
    int j =1;
    int i=0;
    while(!p.empty()){//(n-1)(k-1)logk;
        vector<int>r=p.top();
        v.push_back(r[0]);
        p.pop();
        r[2]++;
        if(r[2]<n){
        vector<int>s={A[r[1]][r[2]],r[1],r[2]};
        p.push(s);
            
        }
    }
    return v;
}

};
