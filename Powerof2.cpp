class Solution {
public:
    bool isPowerOfTwo(int n) {

        // if no of set bits is 1 only then true 
        //otherwise false 
        int count = 0; 
        while(n>0){
            if(count >1){
                return false;
            }
            if(n&1==1){
                count++; 
                n = n>>1;
            }
            
        }
        if(count == 0){
            return false;
        }
    return true ;
    // if (n==0)
    //     return false;
    //  while(n!=0){
    //     if((n%2 == 0)){
    //         n = n/2 ; 
    //         continue;
    //     }
    //     else if(n==1){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    //  }
    //  return true;  
    }
};
