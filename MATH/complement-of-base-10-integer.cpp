/*
https://leetcode.com/problems/complement-of-base-10-integer/description/
*/

 int bitwiseComplement(int n) {
            //from dsa series
        int  num = n;
        int mask = 0;

        if(n == 0){
            return 1;
        }

        while(num != 0){
            mask = (mask << 1) | 1;
            num = num >> 1;

        }

        int ans = (~n) & mask;

        return ans;
        
    }