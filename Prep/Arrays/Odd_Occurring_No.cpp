//A1:find freq of all elements-O(n^2),O(nlogn)

int findSingle(int N, int arr[]){
        int x=0;
        for(int i=0;i<N;i++){
            x=x^arr[i];
        }
        return x;
    }
tc:O(n),O(1)
