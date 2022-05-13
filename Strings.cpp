//iterate through string if we see a char first time put v[i] value as that index and if again that char is encountered put it as -2;
//finally in count array we will have all first index of all non repating chars,iterate and find min in that;
char nonrepeatingCharacter(string s)
    {
        vector<int>v(26,-1);
        for(int i=0;i<s.length();i++){
            if(v[s[i]-'a']==-1)v[s[i]-'a']=i;
            else v[s[i]-'a']=-2;
        }
        int min=INT_MAX;
        for(int i=0;i<26;i++){
            if(v[i]>=0){
                if(v[i]<min)min=v[i];
            }
        }
        char c;
        if(min==INT_MAX)c='$';
        else c=s[min];
        return c;
    }
