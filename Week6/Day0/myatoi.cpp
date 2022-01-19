class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' '){ //ignore leading whitespaces
         i++;   
        }
        long long sum=0;
        bool n=false;
        if(i==s.length())return sum;//if only white spaces are there return 0;
        if(s[i]=='-'||s[i]=='+'){//chek for sign character immediately before  the numbers if no sign given take as positive;
            if(s[i]=='-')n=true;
            i++;
        }
        while(i<s.length()){//Iterate and construct integer equivalent;
            sum=sum*10+(s[i]-'0');
            if(sum>INT_MAX)break;//if the integer goes out of range trim it to extremes;
            if(sum<INT_MIN)break;
            i++;
        }
        if(n==true)sum=-sum;
        if(sum>INT_MAX)sum=INT_MAX;
        if(sum<INT_MIN)sum=INT_MIN;
        return sum;
    }
  Time:O(N);
  space:O(1);
};
