/*
https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
*/

 int subtractProductAndSum(int n) {

        //FROM DSA SERIES
        int sum = 0;
        int product = 1;

        while(n != 0){
            //int rem = n % 10;
            sum += (n % 10);
            product *= (n % 10);

            n /= 10;
        }

        return (product - sum);
        
    }