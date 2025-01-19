class Solution {
public:
    int bitwiseComplement(int n) {
        // int m = n;
        // int mask = 0;
        // if(n == 0)
        //     return 1;
        

        // while(m!=0){
        //     mask = (mask << 1) | 1;
        //     m = m >> 1;
        // } 
        // int ans = (~n) & mask;
        // return ans;
// Create a mask here 
// XOR the number with the mask 


        int m = n;
        int mask = 0;
        if(n==0){
            return 1;
        } 
        while(m !=0){
            mask = (mask<<1) | 1;
            m = m>>1;
        }
        return (mask ^ n);
    }
};
