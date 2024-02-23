/*
https://leetcode.com/problems/unique-number-of-occurrences/description/
*/

bool uniqueOccurrences(vector<int>& arr) {

        //from dsa series
        map<int,int> m;

        for(auto i : arr){
            m[i]++;
        }
         for (auto it1 = m.begin(); it1 != m.end(); ++it1) {
            for (auto it2 = next(it1); it2 != m.end(); ++it2) {
                if (it1->second == it2->second) {
                    return false; // Found a duplicate frequency
                }
            }
        }

    return true;
    }