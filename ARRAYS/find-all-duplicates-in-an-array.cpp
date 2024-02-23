/*
https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
*/
vector<int> findDuplicates(vector<int>& nums) {

            //from dsa series
            
        vector<int> ans;

        map<int,int> m;

        for(auto i : nums){
            m[i]++;
        }

        for(auto i : m){
            if(i.second == 2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }