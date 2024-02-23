/*
https://leetcode.com/problems/number-of-1-bits/description/
*/

int hammingWeight(uint32_t n) {

        // FROM DSA SERIES

        int count = 0;

        while(n != 0) {
        //check last bit
        if(n & 1) {
            count++;
        }
        //division
        n = n >> 1;
        
    }

    return count;
    }