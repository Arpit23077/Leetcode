#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map; // value -> index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // If complement exists in map, return its index and current index
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }

            // Store the current number and index
            num_map[nums[i]] = i;
        }

        // No solution (as per constraints, this won't happen)
        return {};
    }
};