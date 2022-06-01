---------------Union----------------
 //Approach 1:
  keep pushing elements into union array and before checking check if its not already present in union array-O(m*n)
//Approach 2:
  in above searching is taking O(n) time.
  so iterate through array push it into union array and hashmap if its not present in hashmap.
  Time:O(m+n),space:O(m+n).
  push all elements from both arrays into hashmap and then iterate hashmap to fill elements into union array.
//Approach 3:
  sort both arrays and have two pointers at start of both arrays and then take min among both pointer values and include it into union if union.back() is not same as included element.
  if both are same include any one and increase both pointers.
--------------------------------Intersection-----------------------------------
  //Approach 1:
    iterate through a array1 and check if its present in array2 and not already included in intersection -O(n*m).
  //Approach 2:
     push all elemts of array2 into hashmap and then check if its present in map and if yes push into intersection and erase from map.-O(n+m),O(n+m).
  //Approach 3:
     sort both arrays and apply intersection algo.
--------------------------------------------------------------------------------------------
int ptr1=0,ptr2=0;
while(ptr1<v1.size()&&ptr2<v2.size()){
    if(v1[ptr1]<v2[ptr2]){
       if(unin.empty()||unin.back()!=v1[ptr1]) unin.push_back(v1[ptr1]);
    ptr1++;    
    }
    else if(v2[ptr2]<v1[ptr1]){
       if(unin.empty()||unin.back()!=v2[ptr2]) unin.push_back(v2[ptr2]);
        ptr2++;
    }
    else {
       if(unin.empty()||unin.back()!=v2[ptr2]) 
       {
           unin.push_back(v1[ptr1]);
           if(inter.empty()||inter.back()!=v1[ptr1]) inter.push_back(v1[ptr1]);
       }
         ptr1++;
         ptr2++;
    }
}
while(ptr1<v1.size()){
if(unin.empty()||unin.back()!=v1[ptr1])unin.push_back(v1[ptr1]);
ptr1++;
}
while(ptr2<v2.size()){
if(unin.empty()||unin.back()!=v2[ptr2])unin.push_back(v2[ptr2]);
ptr2++;
}
for(int i=0;i<unin.size();i++){
    cout<<unin[i]<<" ";
}
cout<<endl;
for(int i=0;i<inter.size();i++){
    cout<<inter[i]<<" ";
}
}
