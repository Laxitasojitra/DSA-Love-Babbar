/*
https://leetcode.com/problems/reverse-integer/description/
*/

int reverse(int x) {
   
     //from dsa series
            
      long long  res=0;

       while(x) {
        res = res * 10 + x % 10;
        x /= 10;
  }
        if(res > INT_MAX || res < INT_MIN){
        return 0; 
        } 
        
        return int(res);
    }