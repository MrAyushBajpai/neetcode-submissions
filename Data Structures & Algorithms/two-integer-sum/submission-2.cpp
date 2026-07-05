class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if (freq.find(target - num) != freq.end()){
                return {freq[target - num], i};
            }
            freq[num] = i;
        }
    }
};
