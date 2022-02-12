class Solution {
public:
    vector<int>p,q;
    Solution(vector<int>& nums) {
        p=nums;
        q=nums;
    }
    vector<int> reset() {
        p=q;
        return q;
    }
    
    vector<int> shuffle() {
        int n=p.size();
        for(int i=n-1;i>=0;i--){
            swap(p[i],p[rand()%(n-i)]);
        }
        return p;
    }
};
