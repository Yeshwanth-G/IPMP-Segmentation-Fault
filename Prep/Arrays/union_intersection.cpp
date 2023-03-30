Union:
** union and intersection cannot have duplicate elements.
 
int doUnion(int a[], int n, int b[], int m)  {
        sort(a,a+n);
        sort(b,b+m);
        vector<int>v;
        int ia=0,ib=0;
        while(ia<n&&ib<m){
            if(a[ia]<b[ib]){
                if(v.empty()==true||v.back()!=a[ia])
                v.push_back(a[ia]);
                ia++;
            }else if(a[ia]>=b[ib]){
                if(v.empty()==true||v.back()!=b[ib]){
                    v.push_back(b[ib]);
                }
                ib++;
            }
        }
        while(ia<n){
            if(v.empty()==true||v.back()!=a[ia])v.push_back(a[ia]);
            ia++;
        }
        while(ib<m){
            if(v.empty()==true||v.back()!=b[ib])v.push_back(b[ib]);
            ib++;
        }
        return v.size();
    }

//tc:O(n+m),sp:o(n+m)

---
 Intersection:

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int ia=0,ib=0;
        while(ia<nums1.size()&&ib<nums2.size()){
            if(nums1[ia]<nums2[ib]){
                ia++;
            }else if(nums1[ia]>nums2[ib]){
                ib++;
            }else{
                if(ans.empty()==true||(ans.back()!=nums1[ia])){
                    ans.push_back(nums1[ia]);
                }
                ia++;
            }
        }
        return ans;
    }
};
//tc: O(n+m),sp:O(min(n,m))
