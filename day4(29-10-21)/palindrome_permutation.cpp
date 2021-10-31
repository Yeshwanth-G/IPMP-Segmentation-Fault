#include<bits/stdc++.h>
using namespace std;
bool answer(string s){
     //if the given string has all characters occuring even number of times 
     //and one charcter will occur odd number of times for odd length strings then that will be a palindrome string
 //Approach:insert all characters into hashmap and then traverse hashmap to check the occurences of each character
    unordered_map<char,int>hmap;
    for(int i=0;i<s.length();i++){  //inserting all characters into hashmap
        hmap[s[i]]++;
    }
    if(hmap.size()<=1)return true;  //if string has only one chracter type then its automatically a palindrome.
    int count=0;                  //this count variable is to handle the chracter that occur odd number of times for odd length strings.
    if(s.length()%2!=0) count=1;
    for(auto it=hmap.begin();it!=hmap.end();it++){
        if((it->second)%2!=0)
        if(count==0)return false;     //if string is even length count will be 0 and we can directly return false if a character occurs odd number times
        else count=0;     //if a string has odd length then count will be one 
                         //and when at max. there will be one char ocuur occuring odd times once that char is encountered we make count as 0;

    }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(answer(s))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
