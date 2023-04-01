//A1:
generate all possible quadraples and check-O(n^4),O(1)
//A2:
 fix first two elements and two sum on remaining;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
two_sum(arr,j+1,n-1);//range is j+1,n-1
}
}
O(n^3),O(1)
//A3:
 generate all posiible pairs and store in auxilary memory.
  now two sum on this.
  *****check that two pairs are not overlapping....
  O(n^2logn),O(n^2)
  
   i = 0;
    j = size - 1;
    while (i < size && j >= 0) {
        if ((aux[i].sum + aux[j].sum == X)
            && noCommon(aux[i], aux[j])) {
            cout << arr[aux[i].first] << ", "
                 << arr[aux[i].sec] << ", "
                 << arr[aux[j].first] << ", "
                 << arr[aux[j].sec] << endl;
            return;
        }
        else if (aux[i].sum + aux[j].sum < X)
            i++;
        else
            j--;
}
