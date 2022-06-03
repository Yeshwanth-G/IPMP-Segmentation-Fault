//Approach 1:
take an answer array generate som random number from 0 to n-1 and select that nuber and put it at start of answer array and update start 
and delete the selected one from original array (O(N)) so that it wont be selected again.
//since deletion takes O(n) total time would be O(N^2)
------------------------------------------------------
//Approach 2:start from right generate random number between 0 annd size-1 and swap it continue by reducing size;
  //O(N),O(1)
  //Fisher Yates Algorithm.
vector<int> shuffle() {
        srand(time(NULL));
        for(int i=p.size()-1;i>=0;i--){
            int x=rand()%(i+1);
            swap(p[x],p[i]);
        }
        return p;
    }
