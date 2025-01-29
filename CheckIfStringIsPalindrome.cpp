#include <bits/stdc++.h> 
void modify(string &s){
    int n = s.size(); 
    for(int i = 0; i < n; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] -'A' +'a';
        }
        else if((s[i]>='0' && s[i]<='9')||(s[i]<='z'&&s[i]>='a')){
            continue; 
        }
        else{
            s.erase(i, 1);
            i--;
            n--;
        }
    }
}
bool checkPalindrome(string s)
{
    // Write your code here.
    if(s.size()==1) return true;
    modify(s);
    int start = 0; 
    int end = s.length() - 1;
    while(start<=end){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
