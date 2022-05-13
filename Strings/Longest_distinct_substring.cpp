//find longest substring having all characters differnt-O(n)
int longestSubstrDistinctChars (string str)
{
    int n=str.length();
    vector<int>v(256,-1);
    int l=-1;
    int s=0,e=0;
    while(s<n&&e<n){
        if(v[str[e]]>=s){
            if(e-s>l){l=e-s;}
            s=v[str[e]]+1;
        }
        v[str[e]]=e++;
    }
    if(e-s>=l)l=e-s;
    return l;
}
