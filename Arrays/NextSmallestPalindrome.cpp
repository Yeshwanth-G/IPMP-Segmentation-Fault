//Approach havee two pointers one at left and right,keep making right=left untill you reach j=i+1 or j==i,
//now you have s[i],s[j]..if they are equal then you may increase them or not
//if current nuber is more than original one you wont replace them else you will increase them and propogate carry.
//now if s[i]!=s[j],irrepective you have to make them equal either directly or incrase and equate,
//if s[i]>s[j] you can directly equate them if s[i]<s[j] then you have to in crease s[i] and equate them and propagate carry.
//finally if carry!=0 means 999 case handle it explicitly.
string Solution::solve(string s) {
		    int n=s.length();
		    int i=0,j=n-1;
		    bool lhg=false;
		    while((j-i)>1){//equate right to left
		        if(s[i]>s[j])lhg=true;//to check if new right will be higher than old one.
				else if(s[i]<s[j])lhg=false;
		        s[j]=s[i];
		        i++;
		        j--;  
		    }
		    int carry=0;
		        if((s[i]<s[j])||(s[i]==s[j]&&lhg!=true)){//if s[i]<s[j] or if they are equal and new right half is not hreater than old one
		            int x=s[i]+1-'0';
		            carry=x/10;
		            s[i--]=(x%10)+'0';
		            s[j++]=(x%10)+'0';
		        }
		        else{//if s[i]>s[j] or s[i]==s[j] and right have more than old one. 
		           s[j]=s[i]; 
		        }
		    
		    while(i>=0&&j<n&&carry!=0){//propogate carry.
		        int x=carry+s[i]-'0';
		        s[i--]=(x%10)+'0';
		        s[j++]=(x%10)+'0';
		        carry=x/10;
		    }
		    if(carry!=0){//999 case
		        s[0]='1';
		        s+='1';
		    }
		    return s;
		    
		}

