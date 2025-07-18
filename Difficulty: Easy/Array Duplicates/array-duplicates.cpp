class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> m;
        vector<int> result;

        // Count frequency of each element
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }

        // Collect elements that appear more than once
        for (auto it : m) {
            if (it.second > 1) {
                result.push_back(it.first);
            }
        }

        // Optional: If no duplicates found, return {-1} (depends on GFG problem requirement)
        if (result.empty()) {
            return {};
        }

        return result;
    }
};
