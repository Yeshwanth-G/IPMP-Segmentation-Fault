#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<vector>
using namespace std;
vector<int> twosum(int a[], int p,int q, int n, int x)
{
    // Approch 1:two pointer approach
    // int i=p+1,j=n-1;
    // while(i<j){
    //     if(a[j]+a[i]<x)
    //     i++;
    //     else if(a[i]+a[j]>x)
    //     j--;
    //     else {
    //         if(p!=i&&p!=j)
    //         return 1;
    //     }
    // }
    // return 0;
    //Approach 2:using extra space
    unordered_map<int, int> hmap;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        if (i != p&&i!=q)
        {
            if (hmap.empty() || hmap.find(x - a[i]) == hmap.end()){
                hmap[a[i]];
                }
            else{
            v.push_back(a[i]);
            v.push_back(x-a[i]);
                return v;
                }
        }
    }
    return v;
}
void triplet(int a[], int n, int X)
{
    //Approach1:for every pair a[i],a[j]...find if other two numbers exists such that sum gives x==>time:O(n^3),space:O(1)/O(n)
    // // sort(A,A+n);
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j=i+1;j<n;j++){       
    //     if (!twosum(A, i,j, n, X-A[i]-A[j]).empty()){
    //         vector<int>v=twosum(A, i,j, n, X-A[i]-A[j]);
    //             cout<<v[0]<<" "<<v[1]<<" "<<A[i]<<" "<<A[j];
    //         return ;}
    //     }
    // }
    // cout<<"-1";
    // return ;
    //Approach:2=>for every pair a[i],a[j] find sum and then iterate in that sum array and find two elements which gives sum as x;
    unordered_map<int,pair<int,int>>hmap;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(hmap.empty()||hmap.find(X-a[i]-a[j])==hmap.end()){
                pair<int,int> p=make_pair(i,j);
                hmap[a[i]+a[j]]=p;
            }
            else{
                pair <int,int>p=hmap.find(X-a[i]-a[j])->second;
                if(i!=p.first&&i!=p.second&&j!=p.first&&j!=p.second){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[p.first]<<" "<<a[p.second]<<endl;
                    return ;
                }
            }
        }
    }
    return;
}
int main()
{
int arr[5]={1,2,3,4,5};
triplet(arr,5,10);
    return 0;
}
