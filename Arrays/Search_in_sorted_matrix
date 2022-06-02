//Approach 0 : normal linear serach in every  row:Time:O(m*n)
//Approach 1:Apply binary search in every row:Time:O(nlogm);
class Solution {
public:
  //Approach 2 : Have two pointers r,c;r pointing 0 intially and c pointing to top right corner and discard the columns and rows by comparing array[r][c] with target value;
  //Time:O(m+n),O(1)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int r=0,c=n-1;
        while(r<m&&c>=0){
            if(target>matrix[r][c]){
                r++;
            }
            else if(target<matrix[r][c]){
                c--;
            }
            else return true;
        }
        return false;
    }   
};
