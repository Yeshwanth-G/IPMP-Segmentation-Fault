#include<bits/stdc++.h>
using namespace std;
bool answer0(string s){
//bruteforce approach:for each character traversing remaing string and checking the occurences of that character
//Time:O(n^2),space:O(1) n-string length.
for(int i=0;i<s.length()-1;i++){
    for(int j=i+1;j<s.length();j++){
        if(s[i]==s[j])
        return false;
    }
}
return true;
}
bool answer1(string s){
//traversing the string and inserting each character into hash map,if that chracter is already present we return false;
//Time:O(n),space:O(n)  n=string length;
    unordered_map<char,int>hmap;
    for(int i=0;i<s.length();i++){
        if(hmap.find(s[i])!=hmap.end()){
            return false;
            }
        hmap[s[i]];
    }
    return true;
}
bool answer2(string s){
    //inserting all the characters into hashmap and finally if string has all unique characters then all of them will get inserted into hashmap and size of hashmap ill be size of string as hashmap contains only unique key value;
    //Time:O(n),Space:O(n) n-string length;
    unordered_map<char,int>hmap;
    for(int i=0;i<s.length();i++){
        hmap[s[i]];
    }
    if(hmap.size()==s.length())return true;
    return false;
}
bool answer3(string s){
//sorting all the characters of string based on ascii values and cheking if adjacent characters are same
//Time:O(nlogn),space:O(1)-depends on how we are sorting the elements  n-string length;
    sort((&s[0]),(&s[s.length()-1]));
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1])return false;
    }
    return true;

}
bool answer4(string s){
//Using an auxilary array and for each character of string encountered we will make its corresponding index value true if its false already else we can say that charcter occured twice
//Time:O(n),Space:O(1)-but extra space of 256 bytes is required.
 bool arr[256]={ 0 };
 for(int i=0;i<s.length();i++){
     if(arr[s[i]]==true) return false;
     arr[s[i]]=true;
 }
 return true;   
}
int main(){
string s;
getline(cin,s);//for spaced strings also.
cout<<s<<endl;
cout<<answer0(s);
cout<<answer1(s);
cout<<answer2(s);
cout<<answer3(s);
cout<<answer4(s);
return 0;
}
