bool possible(vector<int>&v,int mx,int st){
    int sum=0;
    for(int i=0;i<v.size();i++){
        if(sum>mx)return false;
        if(sum+v[i]<=mx)sum+=v[i];
        else{
            st--;
            sum=v[i];
        }
    }
    if(sum>mx)return false;
    return st>0;
}
int Solution::books(vector<int> &v, int students) {
    long long s=0,e=1e10,ans=-1;
    if(students>v.size())return -1;
    while(s<=e){
        int mid=(s+e)/2;
        if(possible(v,mid,students)){
            ans=mid;
            // cout<<s<<" "<<e<<" "<<mid<<endl;
            e=mid-1;
        }
        else s=mid+1;
    }
    return ans;

}
