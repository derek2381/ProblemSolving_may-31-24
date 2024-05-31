// problem link
// https://leetcode.com/problems/number-of-common-factors/description/


class Solution {
public:
    int commonFactors(int a, int b) {
        int val = min(a, b);

        int res = 0;

        for(int i = 1;i <= val;i++){
            if(a%i == 0 && b%i == 0){
                res++;
            }
        }

        return res;
    }
};
