Find the smallest window in a string containing all characters of another string 
//O(n)
string smallestWindow (string sr, string p)
    {
     unordered_map<int,int>hmap1;
     if(p.length()>sr.length())return to_string(-1);
     for(int i=0;i<p.length();i++)hmap1[p[i]]++;
     int n=sr.length();
     int s=0,e=0;
     int l=INT_MAX,e1=-1,s1=-1;
     int count=hmap1.size();
     while(s<=e&&e<n){
         if(hmap1.find(sr[e])!=hmap1.end()){
             hmap1[sr[e]]--;
         if(hmap1[sr[e]]==0)count--;
         }
         if(count==0){
             while(hmap1.find(sr[s])==hmap1.end()||hmap1[sr[s]]<0){
                 if(hmap1.find(sr[s])!=hmap1.end())hmap1[sr[s]]++;
                 if(e-s+1<l){e1=e;s1=s;l=e-s+1;}
                 s++;
             }
             if(e-s+1<l){e1=e;s1=s;l=e-s+1;}
             hmap1[sr[s]]++;
             s++;
             count++;
         }
         e++;
     }
     string p1;
     if(s1==-1)return to_string(-1);
     for(int i=s1;i<=e1;i++){
        p1+=sr[i];
     }
     return p1;
    }
