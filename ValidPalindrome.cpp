class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i <s.size(); i++){
            char ch = s[i];
            if(ch>='A' && ch<='Z'){
                ch = ch -'A' + 'a';
                s[i] = ch;
            }
            else if ((ch<='z'&&ch>='a')||(ch<='9'&&ch>='0')){
                continue; 
            }
            else{
                s.erase(i, 1);
                i--;
            }
        }
        cout<<s;
        int start = 0; 
        int end = s.size()-1;
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    
};
