class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> item;
        for (int num: nums){
            if(item.find(num) != item.end()){
                return true;
            }
            item.insert(num);
        }
        return false;
    }
};