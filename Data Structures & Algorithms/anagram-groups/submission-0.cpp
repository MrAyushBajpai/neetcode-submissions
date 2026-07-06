class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> record;

        for(string s: strs){
            string unsorted_s = s;
            sort(s.begin(), s.end());
            record[s].push_back(unsorted_s);
        }

        vector<vector<string>> result;
        for(auto item: record){
            result.push_back(item.second);
        }

        return result;
    }
};
