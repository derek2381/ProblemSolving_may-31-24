// problem link
// https://leetcode.com/problems/single-number-iii/description/


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<long long int, int> mp;
        for(int i : nums){
            mp[i]++;
        }

        vector<int> res;

        for(auto it : mp){
            if(it.second == 1){
                res.push_back(it.first);
            }
        }

        return res;
    }
};
