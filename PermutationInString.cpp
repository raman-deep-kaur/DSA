class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        //sabse phele count krlo ki substring m kya kya hai 
        for(int i = 0; i <s1.length();i++){
            count1[(s1[i]-'a')]++;
        }
        //ab s2 me travese krne k liye
        //sabse phele size dekho kitna lene hai window ka 
        int windowSize = s1.length();
        int i = 0; 
        //aur ek aur count array bnalo to check 
        int count2[26] = {0};



        //ab traverse kro pheli window k liye 
        while(i<windowSize && i<s2.length()){
            count2[s2[i]-'a']++;
            i++;
        }

        // ab isko ek baar check krlo 
        if(checkEqual(count1, count2)){
            return 1;
        }

        //agar nahi to hum abhi next window p check krenge 
        
        while(i<s2.length()){
            // aage ka ek element htado, 
            char newChar = s2[i];
            count2[newChar-'a']++;

            //last ka include krlo 
            char oldChar = s2[i-windowSize];
            count2[oldChar-'a']--;

            i++;
            //ab check krlo 
            if(checkEqual(count1, count2)){
                return 1; 
            }
            

        }
        return 0;
        
    }


private:
    bool checkEqual(int a[26], int b [26]){
        for(int i = 0; i <26 ; i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
};
