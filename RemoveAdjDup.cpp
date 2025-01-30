class Solution {
public:
    string removeDuplicates(string s) {
        int i = 1; 
        
        while(i<s.length()){
            if(s[i]==s[i-1]){
                s.erase(i-1,2);
                i = 0; 
            }
            i++;
        }   
        return s; 
    }
};

/*
//we can also do it like this 

class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int i = 0; 
        while(i<s.length()){
            if(temp.empty() || s[i]!=temp.back()){
                temp.push_back(s[i]);
            }
            else{
                temp.pop_back();
            }
            i++;
        } 
        return temp;
    }
};

*/
