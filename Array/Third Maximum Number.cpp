class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max = LLONG_MIN;
        long long secondmax = LLONG_MIN;
        long long thirdmax = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++) {

            // Ignore duplicates
            if (nums[i] == max || nums[i] == secondmax || nums[i] == thirdmax)
                continue;

            if (nums[i] > max) {
                thirdmax = secondmax;
                secondmax = max;
                max = nums[i];
            }
            else if (nums[i] > secondmax) {
                thirdmax = secondmax;
                secondmax = nums[i];
            }
            else if (nums[i] > thirdmax) {
                thirdmax = nums[i];
            }
        }

        if (thirdmax == LLONG_MIN)
            return max;

        return thirdmax;
    }
};