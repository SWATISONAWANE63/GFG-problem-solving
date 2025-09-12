class Solution {
public:
    vector<int> find3Numbers(vector<int> &arr) {
        vector<int> ele;

        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                for (int k = j + 1; k < arr.size(); k++) {
                    if (arr[i] < arr[j] && arr[j] < arr[k]) {
                        ele.push_back(arr[i]);
                        ele.push_back(arr[j]);
                        ele.push_back(arr[k]);
                        return ele;
                    }
                }
            }
        }

        return {}; // No triplet found
    }
};
