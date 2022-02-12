string Solution::solve(string s) {
    int n=s.length();
    int i=((n-1)/2);
    int j=((n)/2);
    int count=0;
    if(n%2&&s[n/2]=='9')count++;
    while(i>=0&&j<n){
        if(s[i]!=s[j])break;
        if(s[i]=='9')count+=2;
        i--;
        j++;
    }
    if(count==n){
        string p="";
        p+='1';
        for(int i=1;i<n;i++){
          p+='0';
        }
        p+='1';
          cout<<p<<endl;
        return p;
    }
    int carry=0;
   if(i<0||s[i]<s[j]){
       int sum=s[(n-1)/2]+1-'0';
       s[(n-1)/2]=sum%10+'0';
       carry=sum/10;
   }
   j=(n-1)/2;
   i=((n)/2);
   while(j>=0&&i<n){
       int sum=s[j]+carry-'0';
       s[j]=sum%10+'0';
       carry=sum/10;
       s[i]=s[j];
       j--;
       i++;
   }
   return s;
}
