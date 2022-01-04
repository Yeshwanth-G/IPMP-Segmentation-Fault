#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int twosum(int a[], int p, int n, int x)
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
    for (int i = 0; i < n; i++)
    {
        if (i != p)
        {
            if (hmap.empty() || hmap.find(x - a[i]) == hmap.end())
                hmap[a[i]];
            else
            {cout<<a[i]<<" "<<x-a[i];
                return a[i];}
        }
    }
    return 0;
}
int triplet(int A[], int n, int X)
{
    // sort(A,A+n);
    //Complexity:O(n^2),O(1)-for two pointer approach or O(n^2),O(n)-using hashmap
    for (int i = 0; i < n; i++)
    {
        if (twosum(A, i, n, X - A[i])){
            cout<<A[i]<<" ";
            return 1;}
    }
    cout<<"NO PAIR EXISTS";
    return 0;
}
int main()
{  int arr[5]={1,2,3,4,5};
     triplet(arr,5,6);
    return 0;
}
